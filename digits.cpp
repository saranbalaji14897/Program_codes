#include <iostream>
using namespace std;
long int rev(int n){
 long   int re=0;
    while(n!=0){
        re=re*10+n%10;
        n=n/10;
    }
    return re;
}
  long  int dig(int n,int x){
  long int   count=0,re=0;
        while(count!=x){
         re=re*10+n%10;
         n=n/10;
         count++;
        }
        return re;
    }
int main(){
long int i,j,k,x,n;
 cin>>n;
 cin>>x;
  k=rev(n);
  k=dig(k,x);
  cout<<k<<"\n";
  k=dig(n,x);
  k=rev(k);
  cout<<k;
 
}
