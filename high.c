#include<stdio.h>
int main()
{
int i,a[100],low=0,n;
	scanf("%d",&n);
 	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	low=a[0];
	for(i=0;i<n;i++)
		{
		if(a[i]>low)
		{
		low=a[i];
		}
	}
printf("the maximum element is :%d",low);

}
