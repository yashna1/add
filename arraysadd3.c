#include<stdio.h>
int input()
{
        int n;
        printf("enter the num:");
        scanf("%d",&n);
        return n;
}
void input1(int *a,int n)
{
        int i;
      for(i=0;i<n;i++)
{
        printf("enter the ele:\n");
        scanf("%d",&a[i]);
}
}
int sum1(int *a,int n)
{
        int sum=0,i;
       for(i=0;i<n;i++)
{
        sum=sum+a[i];
}
        return sum;
}
void output(int sum)
{
        printf("the sum is=%d",sum);
}
int main()
{
        int n=input();
        int a[n];
        input1(a,n);
        int sum=sum1(a,n);
        output(sum);
}        
        
