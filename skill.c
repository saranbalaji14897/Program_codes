#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
 char a[100][100],b[100],temp;
 int i,j,k,l,count=0,t=0,x=0,s[100],c=1;
 scanf("%d",&k);
 for(i=0;i<k;i++){
     scanf("%s",a[i]);
 }
 scanf("%d",&l);
 scanf("%s",b);
  for(i=0;i<k;i++){
      for(j=0;a[i][j]!='\0';j++){
          count++;
      }
      s[i]=count;
      count=0;
  }
  for(i=0;b[i]!='\0';i++){
      count++;
  }
 
    temp=b[count-1];
for(j=0;j<l-1;j++){
  for(i=0;i<k;i++){
      if(temp==a[i][0]){
          temp=a[i][s[i]-1];
			printf("%s",a[i]);
          }
		
		}
      }
  
  printf("%s",b);
return 0;
}
