#include <stdio.h>
#include <stdlib.h>
#define N 5
int queue[N];
int rear = -1, front = -1;
void enqueue() {
int val;
printf("enter the data:");
scanf("%d", &val);
if (rear == -1 && front == -1)
{
rear = front = 0;
queue[rear] = val;
}
else if ((rear + 1) % N == front){
printf("queue is overflow\n");
return;
}
else{
 rear = (rear + 1) % N ;
queue [rear] = val;
}
}
void dequeue() 
{
if (rear == -1 && front == -1)
{
printf("queue is underflow\n");
return;
}
else if (rear == front)
{
printf("deleted item is %d\n" , queue[front]);
rear = front = -1;
}
else{
printf("deleted item is %d\n" , queue[front]);
front = (front + 1) % N;
}
}
void search() {
int data , flag = 0 , count = 0;
{
printf("queue is underflow\n");
return;
}
printf("enter the data to search:");
scanf ("%d", &data);
int i = front;
while (1)
{
if (queue[i] == data)
{
flag = 1;
break;
}
if (i == rear)
break;
i= (i + 1)%N;
count++;
}
if (flag == 1)
printf("element is found at position %d\n" , count + 1);
else
printf("element is not found\n");
}
void display()
{
if (rear == -1 && front == -1)
{
printf("queue is underflow\n");
return;
}
printf("queue elements:");
 int i = front;
while (1)
{
printf("%d\n" , queue[i]);
 if (i == rear)
            break;
i = (i + 1) % N;
}
printf("\n");
}
int main() {
    int choice;
    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                search();
                break;
            case 4:
                display();
                break;
            case 5:
            	exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}





















 

