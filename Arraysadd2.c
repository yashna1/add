
#include<stdio.h>
int input()
{
        int n;

        printf("enter the number of array element\n");
        scanf("%d",&n);
        return n;
}
void input1(int n,int *a)
{
        int i;
        for(i=0;i<n;i++)
{
        printf("enter the %d array element:",i);
        scanf("%d",&a[i]);
}
}
int compute(int n,int *a)
{
        int i,sum=0;
for(i=0;i<n;i++)
{
        sum=sum+*a;
}
        return sum;
}
void output(int sum,int n)
{

        printf("the sum of array elements are:=%d",sum);
}
int main()
{       int i,a;
        int n=input();
        int arr[i];
        input1(n,&a);
        int sum=compute(n,&a);
        output(sum,n);
}
