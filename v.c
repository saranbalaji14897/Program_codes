#include<stdio.h>
int main()
{
	int i,k,j;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			if((j==i)||(j==k-1-i)){
			printf("*");
				}
			else
				{
			printf(" ");
				}
		
	
		}
	printf("\n");
	}
}
