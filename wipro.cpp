#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i,j,r,v,k=1,z=1,t=0,l=0,temp;
temp=n;
for(i=1;i<=2*n;i++){
	if(i<=n){
	for(j=1;j<=k;j++){
		if(j%2==0){
		cout<<"*";
		}
		else{
		cout<<z;
		z++;
	}
		
}
k++;
k++;
t=k-2;
}
	else{
		
		z=z-temp;
		l=z;
		for(j=1;j<=t;j++){
			if(j%2==0){
			cout<<"*";
				}
		else{
			cout<<l;
			l++;
			}
		}
	temp--;
	t--;
	t--;
}
cout<<"\n";
}
return 0;
}


