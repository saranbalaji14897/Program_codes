#include<stdio.h>
int main(){
	int a[100],i,j,k,l,c=0,n,x,t;
	scanf("%d",&k);
	scanf("%d",&l);
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
			}
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			if(a[i]+a[j]==l){
				c++;
				t=a[i];
				x=a[j];
				for(n=0;n<k;n++){
					if ((t==a[n])||(x==a[n])){
						a[n]=0;
					}					
					}
				}
			}
}
	printf("%d",c);
return 0;
}
