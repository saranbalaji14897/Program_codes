#include<stdio.h>
int main()
{
	int n,i,j,a[100],temp;
	printf("enter the num of values:\n");
	scanf("%d",&n);
	printf("enter the data:\n");
		for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n-1;i++)
		{
		for(j=i+1;j<n;j++)
			{
			if(a[i]>a[j])
				{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
				
								
				}
			}
		}
printf("the ascending values are:");
		for(i=0;i<n;i++){
		printf("%d\t",a[i]);
		
		}
return 0;		
}
