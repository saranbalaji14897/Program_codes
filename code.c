#include<stdio.h>
#include<string.h>
int main(){
	int i=0,j=0,k=0,x=0,t=0,l=0;
	char s[100],a[100][100];
	scanf("%s",s);
	while(s[i]!='\0'){
		if(s[i]=='('){
			k++;
		}
		else if(s[i]==')'){
			t++;
			}
	while(s[i]>='a'&&s[i]<='z'){
		if(j==0){
		a[x][j]='(';
			j++;
			}
		a[x][j]=s[i];
				j++;
				i++;
			l=1;
				}
		if(l==1){
		a[x][j]=')';
			}
				x++;
				j=0;
				l=0;
		i++;
	}
if(t==1||k==1){
for(i=0;i<x;i++){
		printf("%s",a[i]);
				}
}
		else{
		if(k<t){
			t=k;
			}
for(i=0;i<t;i++){
		printf("(");
}
for(i=0;i<x;i++){
printf("%s",a[i]);
}
for(i=0;i<t;i++){
printf(")");
}
}

return 0;
}
			
		
