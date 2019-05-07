
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
void output(int *a,int n)
{
        int i;
for(i=0;i<n;i++)
{
        printf("the array elements are:=%d",a[i]);
}
}
int main()
{       int i,a;
        int n=input();
        int arr[i];
        input1(n,&a);
        output(&a,n);
}
