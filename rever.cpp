#include<iostream>
using namespace std;
		 void recursion(char *c,int d){
		int i;
			for(i=0;i<d;i++){
			cout<<c[i]<<"\n";
}
}
 
int main(){
	char a[100],**b[10][100];
	int i=0,j=0,x=0,k=0;
	cin.getline(a,100);
	while(a[x]!='\0'){
			j=0;
		while((a[x]!='\0')&&(a[x]!=' ')){
			b[k][j]=a[x];
				x++;
				j++;
				}
				k++;
				x++;
			}
			recursion(b,k);
}
}
