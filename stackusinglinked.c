#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*next;
};
struct node*newnode,*head=NULL;

void push(){
  newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode==NULL){
    printf("memory allocation failed\n");
    return;
  }
  printf("enter the data:");
  scanf("%d",&newnode->data);
  newnode->next=head;
  head=newnode;
  printf("%d is push into the stack",head->data);
}
void pop(){
  struct node*temp;
  if(head==NULL){
    printf("stack is empty");
    return;
  }
  temp=head;
  printf("the deleted data is %d\n",temp->data);
  head=head->next;
  free(temp);
}
void peek(){
  if(head==NULL){
  printf("stack is empty\n");
  return;
}
  printf("top element is %d\n",head->data);
}
void disply(){
  struct node*temp;
  if(head==NULL){
    printf("stack is empty\n");
    return;
  }
  temp=head;
  printf("stack elements are : ");
  while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("\n");
  }
  int main(){
    int opt;
    do{
      printf("\n1)push");
      printf("\n2)pop");
      printf("\n3)peek");
      printf("\n4)display");
      printf("\n5)quit");
      printf("\nchoose a option");
      scanf("%d",&opt);
      
      switch (opt){
        case1:
          push();
          break;
        case2:
          pop();
          break;
        case3:
          peek();
          break;
        case4:
          disply();
          break;
        case5:
          printf("exiting..\n");
          exit(0);
        default:
          printf("invalid option\n");
        }
        }while(1);
        return 0;
      }
