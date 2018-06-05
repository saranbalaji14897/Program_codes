#include<iostream>
using namespace std;
int main(){
	int i,j,k,temp;
	int a[100];
	cin>>k;
	for(i=0;i<k;i++){
		cin>>a[i];
		}
	for(i=0;i<k;i++){
	for(j=i+1;j<k;j++){
		if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<k/2;i++){
		cout<<a[k-1-i]<<a[i];
}
	}
