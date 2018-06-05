#include<stdio.h>
#include<string.h>

int main(){
	int i,j,k=0;
	char s[100],a[100][100];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++){
		k++;
		}
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			if(i==j){
				printf("%c",s[j]);
					}
		else if(i+j==k-1){
				printf("%c",s[j]);
						}
			else{
				printf(" ");
				}
			}
		printf("\n");
	}
return 0;
}



