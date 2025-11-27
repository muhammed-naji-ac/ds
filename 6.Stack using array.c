#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int val)
{
if (top == MAX -1)
{
printf("stack overflow\n");
}
else
{
top++;
stack[top]=val;
printf("%d pushed to stack\n",val);
}
}
void pop()
{
if (top == -1)
{
printf("stack underflow\n");
}
else
{
printf("%d popped to stack\n",stack[top]);
top--;
}
}
void peek()
{
if (top == -1)
{
printf("stack is empty\n");
}
else
{
printf("top element: %d\n",stack[top]);
}
}
void display()
{
if (top == -1)
{
printf("stack is empty\n");
}
else
{
printf("stack element: %d\n",stack[top]);
for (int i = top; i>=0; i--)
{
printf("%d" , stack[i]);
}
printf("\n");
}
}
int main()
{
int choice, value;
while(1)
{
printf("\n Stack menu:\n");
printf("1. push\n");
printf("2. pop\n");
printf("3. peek\n");
printf("4. display\n");
printf("5. exit\n");
printf("enter your choice:");
scanf("%d", &choice);
switch(choice)
{
case 1:
    printf("Enter the value to push:");
    scanf("%d", &value);
    push(value);
    break;
case 2:
    pop();
    break;
case 3:
    peek();
    break;
case 4:
    display();
    break;
case 5:
    return 0;
defualt:
    printf("invalid choice\n");
}
}
}
    



