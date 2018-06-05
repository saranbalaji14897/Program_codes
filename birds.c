#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	int b[50],c[50],count=0,i,j,n,low;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
			}
	for(i=0;i<5;i++){
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
			count++;
				}
			}
			c[i]=count;
			count=0;
		}
	//for(i=0;i<5;i++){
		//printf("%d",c[i]);
		//}
	low=c[0];
	for(i=0;i<5;i++){
		if(c[i]>low){
		low=i;
		}
}
	printf("%d",a[low]);

return 0;
}
