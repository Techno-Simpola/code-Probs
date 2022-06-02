#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Node
{

public:
	int data;
	Node *next;
	Node *prev;

	// constructor...
	Node(int data)
	{
		this->data = data;
		this->prev = NULL;
		this->next = NULL;
	}

	~Node()
	{
		int val = this->data;
		while (next != NULL)
		{
			delete next;
			next = NULL;
		}

		cout << "memory free for node with data " << val << endl;
	}
};

int getLength(Node *&head)
{

	int len = 0;
	Node *temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	return len;
}

// inserting from the start in doubly liked list
void insertAtHead(Node *&head, int data)
{

	if (head == NULL)
	{
		Node *temp = new Node(data);
		head = temp;
	}
	Node *temp = new Node(data);
	temp->next = head;
	temp->prev = NULL;
	head->prev = temp;
	head = temp;
}

// inserting from the back in a doubly liked list
void insertAtTail(Node *&tail, int data)
{

	if (tail == NULL)
	{
		Node *temp = new Node(data);
		tail = temp;
	}

	Node *temp = new Node(data);
	tail->next = temp;
	temp->prev = tail;
	temp->next = NULL;
	tail = temp;
}

// inserting at any position in the doubly liked list
void insertAtPos(Node *&head, Node *&tail, int pos, int data)
{

	if (pos == 1)
	{
		insertAtHead(head, data);
		return;
	}

	Node *temp = head;
	int count = 1;

	while (count < pos - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp->next == NULL)
	{
		insertAtTail(tail, data);
		return;
	}

	Node *nodeToInsert = new Node(data);

	nodeToInsert->prev = temp;
	temp->next->prev = nodeToInsert;
	nodeToInsert->next = temp->next;
	temp->next = nodeToInsert;
	nodeToInsert->prev = temp;
}

// deleting at any position in the doubly liked list
void deleteAtPos(Node *&head, Node *&tail, int pos)
{
	if (pos == 1)
	{
		Node *temp = head;
		temp->next->prev = NULL;
		head = temp->next;
		temp->next = NULL;
		delete temp;
	}

	else
	{

		int cnt = 1;
		Node *curr = head;
		Node *prev = NULL;

		while (cnt < pos)
		{
			prev = curr;
			curr = curr->next;
			cnt++;
		}

		if (curr->next == NULL)
		{ // its fakking last node
			curr->prev = NULL;
			prev->next = NULL;
			tail = prev;
			delete curr;
		}

		else{
			curr->prev = NULL;
			prev->next = curr->next;
			curr->next = NULL;
			delete curr;
		}
	}
}

// printing doubly linked list
void print(Node *&head)
{

	Node *temp = head;

	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	Node *node1 = new Node(10);
	Node *head = node1;
	Node *tail = node1;
	cout << "length of the linked list is: " << getLength(head) << endl;

	insertAtHead(head, 5);
	print(head);

	insertAtTail(tail, 12);
	print(head);

	insertAtPos(head, tail, 1, 1111);
	print(head);

	deleteAtPos(head, tail, 4);
	print(head);
	
	cout << endl << "tail: " << tail->data << endl;
	return 0;
}