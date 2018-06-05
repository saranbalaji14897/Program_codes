#include<stdio.h>
int main()
	{
	int i,j,k,l,t,temp;
	scanf("%d",&k);
	l=k/2;
	t=l;
	temp=k/2;
	for(i=0;i<k/2;i++){
		for(j=0;j<l;j++){
		printf("+");
		}
		l--;
		for(j=l+1;j<k/2;j++){
				printf("~");
					}
		for(j=0;j<k/2;j++){
			if(j==t-1-i){
			printf("*");
		}
			else{
			printf("~");
				}
		}
	printf("\n");
	}
	
	for(i=0;i<k/2;i++){
		
		for(j=0;j<k/2;j++){
			if(j==t-1-i){
			printf("*");
		}
			else{
			printf("~");
				}
		}
		for(j=0;j<temp-1;j++){
		printf("~");
		}
		temp--;
		for(j=temp;j<k/2;j++){
				printf("|");
					}
	printf("\n");
	}
}
