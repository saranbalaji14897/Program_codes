#include<stdio.h>
#include<string.h>
int main(){

	int count=0,c,k,t,i,j,x=0;
	char s[100],a[100][100];
		scanf("%s",s);
		scanf("%d",&k);
		for(i=0;s[i]!='\0';i++){
			count++;
			}
		t=count/k;
		for(i=0;i<t;i++){
			if((i==0)||(i%2==0)){
			for(j=0;j<k;j++){
				a[i][j]=s[x];
					x++;
					}
				}
		else{
			for(j=k-1;j>=0;j--){
				a[i][j]=s[x];
				x++;
				}
			}
		}
	for(j=0;j<k;j++){
		for(i=0;i<t;i++){
		printf("%c",a[i][j]);
			}
		}
return 0;
}
