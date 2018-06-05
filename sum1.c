#include<stdio.h>
int main(){
	int i,j,k,low=0;
	int a[10],b[10];
		for(i=0;i<6;i++)
		{
		scanf("%d",&a[i]);
		}
		b[0]=a[1]+a[2]+a[3]+a[4]+a[5];
		b[1]=a[0]+a[2]+a[3]+a[4]+a[5];	
		b[2]=a[1]+a[0]+a[3]+a[4]+a[5];
		b[3]=a[1]+a[2]+a[0]+a[4]+a[5];
		b[4]=a[1]+a[2]+a[3]+a[0]+a[5];
		b[5]=a[1]+a[2]+a[3]+a[4]+a[0];
		for(i=0;i<6;i++){
		printf("%d\n",b[i]);
		}
	low=b[0];
	for(i=0;i<6;i++)
		{
		if(b[i]<low)
		{
		low=b[i];
		}
	}
printf("%d",low);
	}
