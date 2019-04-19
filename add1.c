 #include<stdio.h>
 int input()
 {
 int n;
 printf("enter the number\n");
 scanf("%d",&n);
 return n;
 }
 int compute(int n)
 {
 n=n+1;
 return n;
 }
 int output(int r)
 {
 printf("the number is=%d",r);
 }
 int main()
 {
 int n,r;
 n=input();
 n=compute(n);
 r=output(n);
 }

