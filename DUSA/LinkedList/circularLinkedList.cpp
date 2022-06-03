#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Node
{

public:
	int data;
	Node *next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}

	~Node()
	{
		int val = this->data;

		if (this->next != NULL){
			delete next;
			next = NULL;
		}

		cout << "mem free for the node with data: " << val << endl;
	}
};


//insrting function
void insertNode(Node* &tail, int element, int data)
{

	// empty list
	if (tail == NULL)
	{
		Node *newNode = new Node(data);
		tail = newNode;
		newNode->next = newNode;
	}
	else
	{
		// non-empty list
		// assuming that the element is present in the list

		Node *curr = tail;

		while (curr->data != element){
			curr = curr->next;
		}

		// element found -> curr is representing element wala node
		Node *temp = new Node(data);
		temp->next = curr->next;
		curr->next = temp;
	}
}

//deleting function
void deleteNode(Node* &tail, int element){
	
	if(tail == NULL){
		cout << "List is empty " << endl;
		return ;
	}

	else{

		Node *previous = tail;
		Node *current = tail->next;

		//assuming value is present

		while(current->data != element){
			previous = current;
			current = current->next;
		}	
		//have to delete current
		previous->next = current->next;

		//for one node case...
		if(previous == current){
			tail = NULL; 
		}

		else if(tail == current){
			tail = previous;
		}
		current -> next = NULL;
		delete current;

	}

}

//printing function
void print(Node* &tail)
{
	Node *temp = tail;
	// empty list
	if (tail == NULL){
		cout << "List is Empty " << endl;
		return;
	}

	do
	{
		cout << tail->data << " ";
		tail = tail->next;

	} while (tail != temp);

	cout << endl;
}



//main function
int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node *tail = NULL;
	insertNode(tail, 5, 3);
	insertNode(tail, 3, 5);
	print(tail);
	// insertNode(tail, 5, 3);
	// insertNode(tail, 3, 5);
	// insertNode(tail, 3, 4);
	// insertNode(tail, 5, 9);
	// insertNode(tail, 5, 8);
	// insertNode(tail, 9, 14);
	// print(tail);

	
	deleteNode(tail, 5);
	print(tail);

	return 0;
}