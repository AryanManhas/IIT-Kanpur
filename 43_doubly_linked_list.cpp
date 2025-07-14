#include <iostream>
using namespace std;

class node{
	
	public:
		int data;
		node* prev;
		node* next;
		
		node(int d): data(d), prev(NULL), next(NULL){}
};

void print(node* head){
	
	node* temp = head;
	
	while( temp != NULL ){
		
		cout<<temp->prev << "\t"<<temp->data  <<"\t"<<temp->next <<endl;
		temp = temp->next;
	}
}

int main(){
	
	node* n1 = new node(10);
	
	node* n2 = new node(20);
	n1->next = n2;
	n2->prev = n1;
	
	node* n3 = new node(30);
	n2->next = n3;
	n3->prev = n2;
	
	node* n4 = new node(40);
	n3->next = n4;
	n4->prev = n3;
	
	print( n1 );
	
	return 0;
}
