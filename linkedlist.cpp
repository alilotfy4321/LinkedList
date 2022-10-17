#include<bits/stdc++.h>
using namespace std;

template <class T>

class LinkedList{
		
public:
	struct Node{
		T data;
		Node* next;
			
};
	
	Node* head=NULL;
	
	
	void insertNode(T value){
	   Node* newNode= new Node();
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
	
	void printList(){
		if(head==NULL){
			return;
		}else{
			Node* current=head;
			while(current!=NULL){
				cout<<current->data<<" ";
				current=current->next;
			}
		}
		
	}
	
void insertposition(int pos,T value){
	Node* newNode= new Node();
	newNode->data=value;
	
	int count=0;
	Node* current=head;
	Node* previus=NULL;
	
     if(head==NULL){
     	head=newNode;
     	newNode->next=NULL;
	 }else{
	 	
	 	if(pos==0){
		 	newNode->next=current;
		 	head=newNode;
		 	return;
		 }
		 
	 	while(count!=pos && current!=NULL){
	 		previus=current;
	 		current=current->next;
	 		count++;
		 }
		
		previus->next=newNode;
		 newNode->next=current;
		 
		 
	 	
	 }
	
}

void deleteNode(int pos){
	Node* current=head;
	Node* previus=NULL;
	if(pos==0){
		 	head=head->next;
		 	delete current;
		 	return;
		 }
		 
		 for(int i=0 ; i<pos-1 ; i++){
		 	previus=current;
	 		current=current->next;
		 }
		 
	    previus->next=previus->next->next;
	    delete current;
	
	
}
void reverseList(){
	Node* current=head;
	Node* previus=NULL;
	Node* next=NULL;
	
	if(head==NULL){
		return;
	}
	
	while(current!=NULL){
		next=current->next;
		current->next=previus;
		previus=current;
		current=next;
	}
	head=previus;
	
}
};


int main(){
	
	LinkedList<int>list;
	list.insertNode(6);
	list.insertNode(10);
	list.insertNode(5);
	list.insertNode(11);
	list.insertNode(1);	
	list.printList();
	list.insertposition(2,9);
	cout<<"\n";
	list.printList();
	list.insertposition(0,0);
	cout<<"\n";
	list.printList();
	list.insertposition(5,20);
	cout<<"\n";
	list.printList();
	list.insertposition(8,8);
	cout<<"\n";
	list.printList();
	list.insertposition(10,10);
	cout<<"\n";
	list.printList();
	cout<<"\n";
	list.deleteNode(3);
	list.printList();
	list.reverseList();
	cout<<"\n";
	list.printList();
	
	return 0;
}
