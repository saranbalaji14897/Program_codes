#include<stdio.h>
#include<math.h>
int main()
{
 int n,sum=0,sum1=0,r,a[100],i;
 //cin>>n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 //cin>>a[i];
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
sum=0;
  while(a[i]!=0)
  {
   r=a[i]%2;
   if(r==1)
   {
    sum++;
   }
   a[i]=a[i]/2;
  }
sum1=sum1+pow(sum,i+1);
 }
 //cout<<sum;
 printf("%d",sum1);
  return 0;
}
