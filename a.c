#include<stdio.h>
int main()
{
	int i,k,j;
	scanf("%d",&k);
	for(i=0;i<k;i++){	
			if(i==k/2){
			for(j=0;j<((k/2)-1);j++){
			printf(" ");
			} 
			for(j=0;j<k+2;j++){
			printf("*");
			}
	}
	else{
		for(j=0;j<k;j++){
			if(j==k-1-i){
			printf("*");
				}
			
				else
				{
			printf(" ");
			}
		}
	}

			for(j=0;j<k;j++){
		if((j==i)&&(i!=k/2)){
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
