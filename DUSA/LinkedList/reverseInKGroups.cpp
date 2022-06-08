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

	//code to free memory
	~Node(){
		
		int val = this -> data;

		if(this->next!=NULL){
			delete next;
			this -> next = NULL;
		}

		cout << "memory deleted" << endl;
	}
};

//inserting from the tail
void insertAtTail(Node* &tail, int data){

	Node* temp = new Node(data);
	tail -> next = temp;
	tail = temp; 
}


int getLen(Node* &head){

	int cnt = 1;
	Node* temp = head;

	while(temp->next!=NULL)
	{
		temp = temp->next;
		cnt++;
	}	

	return cnt;
}


Node* reverseKGroups(Node* &head, int k){

	//base case
	if(head == NULL)
		return NULL;

	Node* forward = NULL;
	Node* prev = NULL;
	Node* curr = head;

	int cnt = 0;

	while(curr != NULL && cnt > k){
		forward = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = forward;
		cnt++;
	}

	//recursive call
	if(forward!=NULL){
		head->next = reverseKGroups(forward, k);
	}

	return prev;
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
	
	
	Node* tail = node1;
	insertAtTail(tail, 11);
	insertAtTail(tail, 19);
	insertAtTail(tail, 21);
	insertAtTail(tail, 124);
	insertAtTail(tail, 171);
	print(head);

	int n = getLen(head);
	cout << endl << "Length of the list is: " << n << endl;

	int k; cin >> k;

	Node* reversedKGroups = reverseKGroups(head, k);
	print(reversedKGroups);

	return 0;
}