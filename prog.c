#include<stdio.h>
int main()
{
	int i,n,p=0;
	int a[100];
	scanf("%d",&n);
		for(i=0;i<n;i++){
		scanf("%d",&a[i]);
			}
		for(i=0;i<n;i++){
					if(a[i]!=a[i+1]){
					p=p+1;
					}
					else{
						p=0;
						}
				}
	printf("%d",p);
return 0;
}
			
