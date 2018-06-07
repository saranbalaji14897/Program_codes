#include<iostream>
using namespace std;
	class node{
	public:
	int data;
	node *next,*prev;
		}*p,*head,*temp;
	
	void insert(){
		int n,i,j,k;
		cout<<"enter the number of elements :";
		cin>>n;
		head=new node;
		//head->prev='\0';
		p=head;
		cout<<"enter the elements :";
		for(i=1;i<=n;i++){
			cin>>k;
			cout<<"->";
		temp=new node;
		temp->data=k;
		temp->prev=p;
		temp->next='\0';
		p->next=temp;
		p=p->next;
		}
		p=head;
		while(p->next!='\0'){
		cout<<p->next->data;
		p=p->next;
		}
		while(p->prev!='\0'){
		cout<<p->data;
		p=p->prev;
		}
	}
	int main(){
	insert();
		}
	
