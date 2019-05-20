#include<stdio.h>
int input()
{
        int n;
        printf("enter the number of array element\n");
        scanf("%d",&n);
        return n;
}
void input1(int *a,int n)
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
        sum=sum+a[i];

}return  sum;
}
void output(int n,int *a,int sum)
{

        printf("the sum of ");
        int i;
        for(i=0;i<n;i++)
        {
         printf("%d+",a[i]);
        }
        printf("=%d",sum);
}

int  main()
{

        int n=input();
        int  a[n];
        input1(a,n);
int sum=compute(n,a);
        output(n,a,sum);
}
