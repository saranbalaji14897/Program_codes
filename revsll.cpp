#include<iostream>
using namespace std;
 class node{
public:
	int data;
	node *next;
	} *p,*head,*nex,*current,*prev,*temp;

	void reverse(node *head){
		current=head;
		prev='\0';
		while(current->next!='\0'){
		nex=current->next;
		current->next=prev;
		prev=current;
		current=nex;	
		}
		head=prev;
		p=head;
	
		while(p->next!='\0'){
		cout<<p->data;
		p=p->next;

}
}
	
	






	int main(){
		
		int n,i,k;
		cout<<"enter the number of elements :";
		cin>>n;
		head=new node;
		head->next='\0';
		p=head;
		cout<<"enter the elements :'\n";
		for(i=1;i<=n;i++){
			cin>>k;
			cout<<"->";
		temp=new node;
		temp->data=k;
		p->next=temp;
		p=p->next;
	}

	reverse(head);
	}
