#include<stdio.h>
#include<string.h>
int main()
{
	int len[50],n,j,k;
	char* a[100],b[100],c[100];
	printf("enter the no of string ");
	scanf("%d",&n);
	printf("enter the num of strings\n");
	for(j=0;j<n;j++)
	{
	scanf("%s",&a[j]);
	len[j]=strlen(a[j]);
	}
	for(j=0;j<n;j++)
		{
		for(k=0;k<len[j];k++)
			{
			if(k%2==0)
				{
				b[j]=b[j]+a[j][k];
				}
			else
				{
				c[j]=c[j]+a[j][k];
				}
			}
	printf("%c" "%c",b[j],c[j]);
	}
}	
