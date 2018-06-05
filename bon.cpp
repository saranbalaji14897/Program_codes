#include<iostream>
using namespace std;
int main(){
	int n,d,i,j,sum=0;
	cin>>n>>d;
	int a[n];
	for(i=0;i<n;i++){
	cin>>a[i];
	}
	cin>>j;
	a[d]=0;
	for(i=0;i<n;i++){
		sum+=a[i];
		}
	if(sum/2==j){
	cout<<"yes";
		}
	else{
		sum-=j;
		cout<<sum;
		}	
	return 0;
}
