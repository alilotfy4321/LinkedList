#include<bits/stdc++.h>
using namespace std;

struct Node{
		int data;
		Node* next;
	};
	
class LinkedList{
	
	public:
	Node* head=NULL;
	
	void swapNodes(int &x,int &y){
	
	if(x==y)return;
	
	
	//search for currentX
	Node* previusX=NULL,*currentX=head;
	while(currentX && currentX->data !=x){
		previusX=currentX;
		currentX=currentX->next;
	}
	
	//search for currentX
	Node* previusY=NULL,*currentY=head;
	while(currentY && currentY->data !=y){
		previusY=currentY;
		currentY=currentY->next;
	}
	//if two not exist
	if(currentX==NULL || currentY==NULL)
	  return;
	  
	  // if current y will be the head node
	  if(previusX!=NULL){
	  	previusX->next=currentY;
	  }else{
	  	currentY=head;
	  }
	  // if current x will be the head node
	  if(previusY!=NULL){
	  	previusY->next=currentX;
	  }else{
	  	currentX=head;
	  }
	  
	  //swapping the addresses
	  
	  Node* temp=currentX->next;
	  currentX->next=currentY->next;
	  currentY->next=temp;
	  
	  
	
}
 //void insert node
	  
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
	  //void display list
	  
	  void printList(){
	  	Node*current=head;
	  	
	  	while(current!=NULL){
	  		cout<<current->data<<" ";
	  		current=current->next;
		  }
	  }
	
};


int main(){
	
	LinkedList list;
	list.insertNode(7);
	list.insertNode(6);
	list.insertNode(5);
	list.insertNode(4);
	list.insertNode(3);
	list.insertNode(2);
	list.insertNode(1);
	int x=4 , y=3;
	list.swapNodes(x,y);
	list.printList();
	
	
	return 0;
}
