#include<stdio.h>
int main()
{
int arr[100],n,i,pos,data;
printf("enter the length \n");
scanf("%d",&n);

printf("enter the array \n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

printf("enter the data for insertion :");
scanf("%d",&data);

printf("enter the position :");
scanf("%d",&pos);

for(i=n-1;i>=pos-1;i--)
arr[i+1]=arr[i];

arr[pos-1]=data;
n++;
printf("inserted element is \n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
}
