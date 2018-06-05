#include<stdio.h>
int main()
{
int a,i,n,c;
printf("enter the table:");
scanf("%d",&a);
printf("enter till which it should execute:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a*i;
printf("%d\n",c);
}
}
