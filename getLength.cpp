#include<bits/stdc++.h>
using namespace std;

 struct Node{
 	int data;
 	
 	Node* next;
 };
 
 class linkedList{
 	private:
 		Node* head=NULL;
 	public:
 		
 		Node* getHead(){
 			return head;
		 }
		 
 		void insertNode(int value)
		 {
		 	Node* newNode=new Node();
		 	newNode->data=value;
		 	newNode->next=NULL;
		 	
		 	if(head==NULL){
		 		head=newNode;
			 }else{
			 	Node* current=head;
			 	while(current->next!=NULL){
			 		current=current->next;
			 		
				 }
				 current->next=newNode;
			 	
			 }
		   
		   
		 }
		 
		 int getCount(Node* head){
		 	int count=0;
		 	Node* current=head;
		 	
		 	while(current!=NULL){
		 		count++;
		 		current=current->next;
		 		
			 }
		 	return count;
		 }
//get length by  recursion-------------------
		 int getCountRecursive(Node* head){
		 	int count=0;
		 	Node* current=head;
		 	if(head==NULL)
			 return 0;
		 	else
			 return 1+getCountRecursive(head->next);
		 }
//--------------------------------------------------------------------------------------


 		
 };


int main(){
	linkedList list;
	list.insertNode(10);
	list.insertNode(20);
	list.insertNode(1);
	list.insertNode(5);
	list.insertNode(30);
	list.insertNode(108);
	
	cout<<"the length of the list ="<<list.getCount(list.getHead());
	cout<<"\nthe length of the list by recursion ="<<list.getCount(list.getHead());
	
	return 0;
}
