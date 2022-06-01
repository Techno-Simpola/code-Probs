#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Node{

public:
	int data;
	Node* next;

	Node(int data){

		this->data = data;
		this-> next = NULL;
	}
};


// inserting from the begin
void insertAtHead(Node* &head, int data){
	//new node
	Node *temp = new Node(data);
	temp -> next = head;
	head = temp;
}

//inserting from the tail
void insertAtTail(Node* &tail, int data){

	Node* temp = new Node(data);
	tail -> next = temp;
	tail = temp; 

}

//insert in between
void insertAtPos(Node* &head,int pos, int data){

	if(pos == 1){
		insertAtHead(head,data); return;
	}


	//traverse till n-1 node....
	Node* temp = head;
	int count = 1;

	while(count < pos-1){
		temp = temp -> next;
		count++; 
	}

	if(temp -> next == NULL) //last node in the total LL
	{
		insertAtTail(head, data);
		return ;
	}

	//creating node for data
	Node* nodeToInsert = new Node(data);
	nodeToInsert -> next = temp -> next;
	temp -> next = nodeToInsert;
}

//travering through the list and printing the data
void print(Node* &head){
	
	Node* temp = head;
	while(temp!=NULL){

		cout << temp -> data << " ";
		temp = temp -> next;
	}

	cout << endl;
}

int main(){


	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	Node* node1 = new Node(10);
	Node* head = node1;
	
	// insertAtHead(head, 12);
	// insertAtHead(head, 15);
	// insertAtHead(head, 16);
	// insertAtHead(head, 17);
	// cout << "Inserted at the head: " << endl;
	// print(head);

	
	Node* tail = node1;
	insertAtTail(tail, 11);
	insertAtTail(tail, 19);
	insertAtTail(tail, 21);
	insertAtTail(tail, 124);
	insertAtTail(tail, 171);
	cout << "Insterted at the tail: " << endl;
	print(head);

	insertAtPos(head, 3, 22);
	cout << "Insterted in between: " << endl;
	print(head);
	// //making new node and inserting in the begining
	// Node* temp = new Node(9);
	// temp->next = node1; //putting the address of previous node in temp node's next
	// node1 = temp;	//making temp as the head node

	// cout << endl;
	// cout << node1->data<<endl;
	// cout << node1->next<<endl;
	return 0;
}