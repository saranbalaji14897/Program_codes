#include<stdio.h>
int main(){
	int i,j,k,l,t=0,n=0;
	int a[50],b[50],c=0;
	scanf("%d",&k);
	scanf("%d",&l);
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<k;i++){
		b[i]=l-a[i];
	}
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
		if(a[i]==b[j]){
			t++;
	}
		else if(a[i]+a[i+1]==b[j]){
			t++;
		
	}
}
}
	for(i=0;i<k;i++){
		for(j=0;j<k;j++){
			if(b[i]==b[j]){
			n++;
}
}
}
	c=n/t;
	printf("%d",c);	
}
