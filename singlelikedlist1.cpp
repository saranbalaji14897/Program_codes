#include<iostream>
using namespace std;
  
	class node{
 public:
		int data;
		node *next;
	} *p,*temp,*head;
	 
	void insertatlast(node *head){
		int k;
		cout<<"enter the number data to be inserted at last :";
		cin>>k;
		p=head;
		/*while(p->next!='\0'){
		p=p->next;
		}*/
		temp=new node;
		temp->data=k;
		temp->next='\0';
		p=head->next;
		head->next=temp;
		temp->next=p;
	
		
		p=head;
	    while(p->next!='\0'){
		cout<<p->next->data<<"->";
		p=p->next;
		}
		cout<<"null";

}
	
	int main(){
		
		int n,i,k;
		cout<<"enter the number of elements :";
		cin>>n;
		head=new node;
		head->next='\0';
		p=head;
		cout<<"enter the elements :";
		for(i=1;i<=n;i++){
			cin>>k;
			cout<<"->";
		temp=new node;
		temp->data=k;
		p->next=temp;
		p=p->next;
}

	insertatlast(head);
}
