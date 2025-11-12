#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1)  // First element being inserted
            front = 0;
        rear++;
        queue[rear] = val;
        printf("%d inserted into queue\n", val);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("%d deleted from queue\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    int choice, val;
    printf("Queue Implementation using Array\n");

    while (1) {
        printf("\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
case 1:
  printf("Enter value to insert: ");
  scanf("%d", &val);
  enqueue(val);
  break;

case 2:
  dequeue();
  break;

case 3:
 display();
 break;

case 4:
  return 0;
default:
  printf("Invalid choice! Try again.\n");
}
}
}

