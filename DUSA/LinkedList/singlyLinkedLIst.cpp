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
	temp->next = head;
	head = temp;
}

//inserting from the tail
void insertAtTail(Node* tail, int data){

	Node* temp = new Node;
	
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

	Node *head = node1;
	print(head);

	insertAtHead(head, 12);
	print(head);

	insertAtHead(head, 15);
	print(head);

	insertAtHead(head, 16);
	print(head);

	insertAtHead(head, 17);
	print(head);

	insertAtHead(head, 18);
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