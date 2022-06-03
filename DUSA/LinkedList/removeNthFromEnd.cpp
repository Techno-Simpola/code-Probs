#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Node{

public:
	int data;
	Node* next;
}

int getLen(Node* &head){

	int cnt = 1;
	Noede* temp = head;

	while(temp->next!=NULL){
		temp = temp -> next;
		cnt++;
	}

	return cnt;
}

void insertAtHead(Node * &head, int data){

	Node* temp = new Node(data);
	temp -> next = head;
	head = temp;
}

void print(Node * &head)
{
	Node* temp = head;

	while(temp->next!=NULL){
		temp = temp -> next;
		cout << temp -> data << endl;
	}
}

void deleteNode(Node * &head, int pos, Node* &tail){

		//deleting the first node
		if(pos == 1){

			Node* temp = head;
			head = temp -> next;
			temp -> next = NULL;
			delete temp;
		}

		else{

			int cnt = 0;
			Node* previous = NULL;	//nodeBehindCurrent
			Node* current = head;  //nodeToBeDeleted
			
			while( cnt < pos ){
				
				previous -> next = current;
				current = current -> next;
				cnt++;
			}

			//deleting the last node
			if(current->next!=NULL){
				tail = previous;
				previous->next = NULL;
				delete current;
			}

			//deleting any node
			else{

				previous -> next = current -> next;
				current -> next = NULL;
				delete current;
			}
		}
}

int main()
{
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	int n; cin >> n //position from end of the linked list


	insertAtHead(head, 11);
	insertAtHead(head, 14);
	insertAtHead(head, 21);
	insertAtHead(head, 16);
	print(head);


	int LenOfList = getLen(head);

	int posFromEnd = LenOfList - n + 1;

	deleteNode(head, tail, posFromEnd);


	return 0;

}