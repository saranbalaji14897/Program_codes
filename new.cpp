#include<iostream>
#include<string>
using namespace std;
/*	char swap(char c[][],int l){
		char a[100][100],i=0;
		while (b[l][i]!='\0'){
			a[0][i]=c[l][i];
			i++;
			}
	return a;
}*/
	

int main(){
int i,j=0,k=0;
char a[100],b[100][100],t[100][100];
	cin>>a;
while(a[i]!='\0'){
	while((a[i]!='\0')&&(a[i]!='0')){
	b[j][k++]=a[i];
	i++;
	}
	i++;
	j++;
	k=0;
}
	for(i=0;i<j;i++){
	cout<<b[i]<<endl;
	}
	for(i=0;i<j;i++){
	for(k=i+1;k<j;k++){
	if(b[i][0]>b[k][0]){
		t=swap(b[i][],i);
		b[i][]=swap(b[k][],k);
		b[k][]=swap(t[0][],i);
		}
	/*else if(b[i][0]==b[k][0]){
		if(b[i][1]>b[k][1]){
		char t=b[i];
		b[i]=b[k];
		b[k]=t;
			}
		}*/
}
}
for(i=0;i<j;i++)
cout<<b[i]<<endl;
}

