#include<stdio.h>
int main()
{
int i,a[100],low=0;
 printf("enter the values:\n");
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
		}
	low=a[0];
	for(i=0;i<3;i++)
		{
		if(a[i]<low)
		{
		low=a[i];
		}
	}
printf("the smallest value is :%d",low);

}
