#include<stdio.h>
int main(){
	int i=1,k=0,l=0,j=0,target,p;
    scanf("%d",&p);
    scanf("%d",&target);
		l=target;
		k=target/2;
	if(target%2!=0){
			l=l-1;
				}
		j=(p-l)/2;
   if(k<j){
        printf("%d",k);
		}
    else{
        printf("%d",j);
    }

return 0;
}
