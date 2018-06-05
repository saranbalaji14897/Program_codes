#include <iostream>
using namespace std;
int main(){
long int n,i,j,k=0,prod=1,f=0;
    cin>>n;
long int a[10000];
    for(i=2;i<500;i++){
        f=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                f=1;
                break;
            }
        }
            if(f==0)
            a[k++]=i;
    }
   //cout<<a[0];
    for(i=0;i<k-2;i++){
        prod=a[i]*a[i+1]*a[i+2];
        if(prod==n){
        cout<<a[i]<<a[i+1]<<a[i+2];
        }
        
    }
 
}
