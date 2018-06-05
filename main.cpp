#include<iostream>
#include<cmath>
int power(int k){
  int count=0;
  while(k!=0){
    k=k/10;
    count++;
  }
  return count;
}

using namespace std;
int main(){
  int n,k;
  cin>>n;
  cin>>k;
  int a[n];
  int i,j=0,l=0;
  for(i=0;i<n;i++){
    cin>>a[i];
    a[i]=a[i]+k;
    
  }
  for(i=0;i<n;i++){
    l=power(a[i]);
    j=(j*(pow(10,l)))+a[i];
  }
  cout<<j;
  
}