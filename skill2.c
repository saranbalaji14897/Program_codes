#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j;
	char s[100];
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++){
		if(((s[i-1]>='a')&&(s[i-1]<='z'))&&((s[i]>='0')&&(s[i]<='9'))&&((s[i+1]>='0')&&(s[i+1]<='9'))&&((s[i+2]>='0')&&(s[i+2]<='9'))&&(((s[i+3]>='a')&&(s[i+3]<='z'))||(s[i+3]=='\0'))){
									printf("%d%d%d",s[i]-48,s[i+1]-48,s[i+2]-48);
													}
			}
				
		return 0;
}
