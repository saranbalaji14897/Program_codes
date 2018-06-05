#include<stdio.h>
int main(){
int j,i,n,k;
scanf("%d",&n);
k=n;
for(j=1;j<=n;j++){
			for(i=k;i>j;i--){
			printf("%d",i);
			}
			printf("\n");
			}

}
