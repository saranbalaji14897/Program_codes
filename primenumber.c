#include<stdio.h>
int main()
{
int i,j,k,s,b=0;
	int a[100];
	scanf("%d",&s);
	for(i=5;i<100;i++)
		{
		for(j=5;j<i;j++){
			if(i%j==0){
				break;
				}
			else{
			for(k=0;k<100;k++){
				a[k]=i;
					}
				}
			}
	}
		for(k=3;k<100;k++){
		if(((s%2==0)&&(s%a[k]!=0))||((s%3==0)&&(s%a[k]!=0))||((s%5==0)&&(s%a[k]!=0))){
		b=1;
		}
	}
		if(b==0)
			{
			printf("no");
		}
		else{
			printf("yes");
			}
			
return 0;
}				
	
