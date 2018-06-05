#include<stdio.h>
#include<string.h>
int main(){
 int b=0,i=0,j=0,k=0,x=0,c[1000],count=0,d=0;
	int t,v,target,e[100];
 char s[1000],l[10];
char a[1000][1000];
	scanf("%s",s);
	scanf("%s",l);
	scanf("%d",&target);
	for(i=0;s[i]!="\0";i++){
		if(s[i]==','){
			d++;
			b+=d;
			}
		}
		if(b==1){
			b+=1;
			}
 	while(s[x]!='\0'){
			j=0;
			count=0;
		while((s[x]!='\0')&&(s[x]!=',')){
			a[k][j]=s[x];
				count++;
				x++;
				j++;
				}
			c[k]=count;
				k++;
				x++;
			}
			for(i=0;i<b;i++){
					d=0;
				for(t=0;t<c[i];t++){
					if(a[i][t]==l[0]){
						d++;
							}
					}
					c[i]=c[i]-d;
				}
				d=0;
				for(i=0;i<b;i++){
					e[i]=c[i];
						}
			E:
				for(i=0;i<b+1;i++){
							
							if(c[i]==target){
									printf("%s",a[i]);
									}
							else{
								d=target-c[i];
								for(v=0;v<b;v++){
									if((e[v]==d)&&(e[v]!=c[i])){
										printf("%s",c[i]);
										printf("%s",c[v]);
										}
								}
								}
						}
							
					while(w>=target){
						w+=c[i];
					printf("%s",a[i]);
						i++;
						}
				
		for(i=0;i<b;i++){
			printf("%d" "%s\n",e[i],a[i]);
				}
							
return 0;
}
