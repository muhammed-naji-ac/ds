#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int n1, n2, i, j, temp;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);  
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    
    for (i = 0; i < n1; i++)
        merged[i] = a[i];
    for (j = 0; j < n2; j++)
        merged[n1 + j] = b[j];

    int n3 = n1 + n2;

    
    for (i = 0; i < n3 - 1; i++) {
        for (j = 0; j < n3 - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
    printf("\n Merged and Sorted Array:\n");
    for (i = 0; i < n3; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}

