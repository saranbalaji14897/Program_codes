#include<stdio.h>
int main(){
int a,i,j,k=1;
	scanf("%d",&a);
for(i=1;i<=a;i++)
{
for(j=k;j<=k+i;j++){
printf("%d ",j);
}
printf("\n");
k++;
}
return 0;
}
	
