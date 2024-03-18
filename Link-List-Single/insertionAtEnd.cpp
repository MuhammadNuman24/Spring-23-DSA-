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
}








































