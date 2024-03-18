#include<iostream>
using namespace std;

struct Node{
	int value;
	Node* next ;
};
Node *start=0;

Node *createNode(int data){
	Node *newNode=new Node();
	newNode->value=data;
	newNode->next=0;
	return newNode;
}
void insertAtBegin(int data){
	Node *newNode=new Node();
    	newNode->value=data;
		newNode->next=start;
		start=newNode;
}
void insertAtEnd(int data){
	Node *newNode=new Node();
	Node *temp=start;
		while(temp->next!=0){
		temp=temp->next;
	}
		temp->next=newNode;
    	newNode->value=data;
    	newNode->next=0;
}
void insertAtSpecificData(int data){
    Node *newNode=new Node();
	Node *temp=start;
	Node *previous=start;
		while(temp->value!=12){
		 previous=temp;
		temp=temp->next;
	}
    	newNode->next=temp;
    	previous->next=newNode;
    	newNode->value=data;
}
int main(){

	start=createNode(12);
	Node *temp=start;
	cout<<"BeforeInsrtion"<<endl;
	while(temp!=0)
	{
        cout<<temp->value<<" "<<endl;
		temp=temp->next;
	};
      insertAtBegin(34);
		cout<<"AfterInsertion"<<endl;
		temp=start;
		while(temp!=0)
	{
        cout<<temp->value<<" "<<endl;
		temp=temp->next;
	};
      insertAtEnd(88);
		cout<<"Insertion at end"<<endl;
		temp=start;
		while(temp!=0)
	{
        cout<<temp->value<<" "<<endl;
		temp=temp->next;
	};
	
	  insertAtSpecificData(64);
		cout<<"Insertion Before node having value 12"<<endl;
		temp=start;
		while(temp!=0)
	{
        cout<<temp->value<<"  " <<temp->next<<endl;
		temp=temp->next;
	};
}







