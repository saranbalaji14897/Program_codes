#include <iostream>
using namespace std;
int main(){
 int n,a[100],i,high=0,h2=0;
 cin>>n;
 for(i=0;i<n;i++){
     cin>>a[i];
 }
 high=a[0];
 for(i=0;i<n;i++){
     if(a[i]>high){
     high=a[i];
     cout<<"0 ";
     }
     else if(a[i]<high&&a[i-1]<high){
     h2=a[i-1];
     cout<<h2<<" ";
 }
     else if(a[i]==high){
        cout<<"0 ";
    }
    else{
     cout<<high<<" ";
    }
}
}
