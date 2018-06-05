#include<stdio.h>
int main(){

    int n,k=0,t=0,l=0; 
  //  /float b,c,d;
    scanf("%d",&n);
    int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]>0){
                k++;
            }
            else if(a[i]<0){
                t++;
            }
            else if(a[i]==0){
                l++;
                }
        
        }
   // b=k/n;
    //c=t/n;
    //d=l/n;
    printf("%d\n",k);
    printf("%d\n",t);
    printf("%d\n",l);
    return 0;
}

