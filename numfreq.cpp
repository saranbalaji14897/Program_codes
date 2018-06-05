#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int high=0,freq[1000],i,j,k,count=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		freq[a[i]]++;
		if(high<freq[a[i]]){
		high=freq[a[i]];
}
	}
	for(i=high;i>=0;i--){
		for(j=0;j<n;j++){
		if(freq[a[j]]==i){
			cout<<a[j];
			freq[a[j]]=0;
			count++;
			if(count==3){
				break;
				}
}
}
			if(count==3)
				break;
			}

}
