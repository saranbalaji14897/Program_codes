#include<stdio.h>
int main()
{
	int i,j,k,t;
	scanf("%d",&k);
	t=k;
	for (i=1;i<=k;i++)
	{
		for(j=1;j<t;j++){
		 printf(" ");
			}
		t--;
		for(j=1;j<=i;j++){
		printf("*");
		}
		printf("\n");
	}
}
