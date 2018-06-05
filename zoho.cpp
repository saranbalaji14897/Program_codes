#include<iostream>
using namespace std;
	int main(){
		int i,j,k,l=0,t=0;
	char a[100],s[100][100],n[100];
	cin>>a;
	cin>>n;
	while(a[i]!='\0')
	{
	while((l!=5)&&(a[i]!='\0')){
		s[t][l]=a[i];
		l++;
		i++;
		k++;
	}
	l=0;
	t++;
	}
	for(i=0;i<t;i++){
		cout<<s[i]<<" "<<endl;
		}

	for(i=0;i<t;i++){
		for(j=0;s[i][j]!='\0';j++){
			if(s[i][j]==n[0]){
				if((s[i][j+1]==n[1])&&(s[i][j+2]==n[2])){
						cout<<i<<j;
						cout<<i<<j+2;
					
						}
			else if((s[i+1][j]==n[1])&&(s[i+2][j]==n[2])){
						cout<<i<<j;
						cout<<i+2<<j;
						}
					}
	}
}
}
