#include<stdio.h>
int main(){
int a,i,j,k;
	scanf("%d",&a);
for(i=1;i<=a;i++)
{
k=1;
for(j=k;j<=2*i;j++){
printf("%d ",j);
}
printf("\n");
k++;
}
return 0;
}
	
