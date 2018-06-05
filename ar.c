#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    int i,j=0,k=0,c=0,t=0;
    int a[10000];
    for(i=1;i<argc;i++){
        a[k++]=atoi(argv[i]);
        if(atoi(argv[i])>c){
            c=atoi(argv[i]);
        }
    }
    for(i=0;i<k;i++){
        for(j=i;j<k;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i>=k;i--){
        if(a[i]<c){
        printf("%d",a[i]);
        break;
    
    }
    if(t==1){
        printf("%d",a[i]);
    }else{
        printf("-1");
    }

}
