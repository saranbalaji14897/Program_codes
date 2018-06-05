#include<iostream>
using namespace std;
int palin(int n){
	int rev=0,sum=0;
while(n!=0){
	rev=rev*10;
	rev=rev+n%10;
	n=n/10;
}
return rev;
}
int main(){
	int i,j,k,n,l=0;
	cin>>n;
	for(i=n+1;i<1000;i++){
		for(j=2;j<i/2;j++){
		if(i%j==0){
			k=1;
			break;
			}
		else{
			l=palin(i);
			if(l==i)
			k=2;
			}
}
			if(k==2)
			break;
		}
	cout<<l;
}
