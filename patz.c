#include<stdio.h>
int main(){
	int i,k,j,h,n,t,p,s,q,w;
	scanf("%d",&n);
		k=n-1;
		t=n;
		p=t;
		s=1;
		q=2;
		w=2;
	for(i=1;i<=n;i++){
			h=n;
		for(j=1;j<=i;j++){
			printf("%d",h);
		h--;
		}
		if(t!=1){
		for(j=1;j<=k;j++){
			printf("%d",t);
			}
		for(j=1;j<=k-1;j++){
			printf("%d",t);
			}
			k--;
			t--;
			}
		if(p==1){
				p=2;
				}
		for(j=p;j<=n;j++){
		printf("%d",j);
			}
			p--;
	
			printf("\n");
			}
		for(j=1;j<n;j++){
			for(i=n;i>j;i--){
			printf("%d",i);
				}
			for(i=1;i<=s;i++){
				printf("%d",q);
				}
			for(i=w;i<=n;i++){
				printf("%d",i);
					}
				w++;
				s++;
				s++;
				q++;
			printf("\n");
			}
			
return 0;
}
