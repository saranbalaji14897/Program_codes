#include<iostream>
using namespace std;
	class node{
	public:
		int data;
		node *next;
			};
	node *p,*head,*temp;
void insert(){
		//node *temp,*head,*p;
		int i,x,n,k;
		head=new node;
		head->next='\0';
		cout<<"enter the number of nodes";
		cin>>n;
		p=head;
		for(i=0;i<n;i++){
		temp=new node;
		cout<<"enter the data";
		cin>>x;
		temp->data=x;
		p->next=temp;
		p=p->next;
		}
	}
void display(){
	p=head;
	while(p->next!='\0'){
	cout<<p->next->data<<"-->";
		p=p->next;
	}
	}
void shift(){
	int i,j,k,n;
	node *l;
	cin>>k;
	cin>>n;
	p=head->next;
	for(j=0;j<n;j++){
	p=head->next;
	for(i=0;i<k;i++){
	temp=new node;
	temp->data=p->data;
	p->data=p->next->data;
	p->next->data=temp->data;
	p=p->next;
		}
	}
	}
		
		
	
	
int main(){
	insert();
	shift();
	display();
}
		
