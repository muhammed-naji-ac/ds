#include <stdio.h>

#define MAX 10

int parent[MAX];
int rankArr[MAX];

void makeSet(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rankArr[i] = 0;
    }
}

int findSet(int x) {
    if (parent[x] != x)
        parent[x] = findSet(parent[x]);
    return parent[x];
}

void unionSet(int x, int y) {
    int rootX = findSet(x);
    int rootY = findSet(y);

    if (rootX == rootY) {
        printf("Elements %d and %d are already in the same set.\n", x, y);
        return;
    }

    if (rankArr[rootX] < rankArr[rootY])
        parent[rootX] = rootY;
    else if (rankArr[rootX] > rankArr[rootY])
        parent[rootY] = rootX;
    else {
        parent[rootY] = rootX;
        rankArr[rootX]++;
    }

    printf("Union(%d, %d) performed.\n", x, y);
}

void display(int n) {
    printf("Parent: ");
    for (int i = 0; i < n; i++)
        printf("%d ", parent[i]);
    printf("\nRank:   ");
    for (int i = 0; i < n; i++)
        printf("%d ", rankArr[i]);
    printf("\n--------------------------\n");
}

int main() {
    int n = 7;
    makeSet(n);

    display(n);

    unionSet(0, 1);
    display(n);

    unionSet(1, 2);
    display(n);

    unionSet(3, 4);
    display(n);

    unionSet(5, 6);
    display(n);

    unionSet(4, 5);
    display(n);

    for (int i = 0; i < n; i++)
        printf("Find(%d) = %d\n", i, findSet(i));

    if (findSet(2) == findSet(4))
        printf("Elements 2 and 4 are in the same set.\n");
    else
        printf("Elements 2 and 4 are in different sets.\n");

    if (findSet(3) == findSet(6))
        printf("Elements 3 and 6 are in the same set.\n");
    else
        printf("Elements 3 and 6 are in different sets.\n");

    return 0;
}

