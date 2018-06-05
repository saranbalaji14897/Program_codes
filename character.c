#include<stdio.h>
#include<string.h>
int main()
{
	 int p,i,len=0;
	char a[100];
	printf("enter the characters:\t");
	scanf("%s",a);
	printf("enter the position:");
	scanf("%d",&p);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
	if(i%p==0&&i!=0)
		{
			printf("le");
			printf("%c",a[i]);
		}
		else
		{
		printf("%c",a[i]);
		}
	}
}
