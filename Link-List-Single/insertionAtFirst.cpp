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
}

























