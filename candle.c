#include<stdio.h>

int main(){
    int n,i,high=0,count=0; 
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++){
        ("%d",&a[i]);
        }
    high=a[0];
    for(i=0;i<n;i++){
        if(high<a[i]){
            high=a[i];
        }
    }
        for(i=0;i<n;i++){
            
                if(high==a[i]){
                    count++;
                }
            
        }
        printf("%d",count);
    }
   
