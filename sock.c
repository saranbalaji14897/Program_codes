#include<stdio.h>
int main(){
	int a[50],b[50],c[50],d[50];
	int i,j,k,l=0,t=0,x=0;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
			}
	for(i=0;i<k;i++){
		for(j=0;j<i;j++){
		if(a[i]==a[j]){
			break;
		}
		if(i==j){
		 b[x]=a[j];
			l++;
			x++;
			}
	}
}
	/*for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			if(b[i]==a[j]){
				t++;
				}
			}
			c[i]=t;
			t=0;
		}*/
	for(i=0;i<l;i++){
		printf("%d",b[i]);
		}
return 0;
}
