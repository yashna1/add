#include<stdio.h>
int input()
{
int n;
printf("enter the number of array elements:");
scanf("%d",&n);
return n;
}
int *input1(int *arr,int n)
{
int i;
for(i=0;i<n;i++)
{
printf("enter the array elements:=%d");
scanf("%d",&arr[i]);
}
return arr;
}
void output(int *arr,int n)
{
int i;
for(i=0;i<n;i++)
{
printf("the array elements are:=%d",arr);
}
}
int main()
{
intn=input();
input1(arr,n);
output(arr,n);
}
