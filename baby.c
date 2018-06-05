#include<stdio.h>
int main(){
int i,k,j;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		for(j=0;j<k/2;j++){
			printf("(");
			}
		for(j=0;j<k/2;j++){
			printf("#");
			}
		for(j=0;j<k/2;j++){
			printf(")");
			}
		printf("\n");
		}
}
