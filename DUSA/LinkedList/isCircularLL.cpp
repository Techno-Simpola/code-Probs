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
void insertAtPos(Node* &tail, Node* &head,int pos, int data){

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
		insertAtTail(tail, data);
		return ;
	}

	//creating node for data
	Node* nodeToInsert = new Node(data);
	nodeToInsert -> next = temp -> next;
	temp -> next = nodeToInsert;
}


//deleting any node with given position
void deleteNode(Node* &head, Node* &tail, int pos){

	if(pos == 1){

		Node* temp = head;
		head = head -> next;
		temp->next = NULL;
		delete temp;
	}

	//have to traverse till the (n-1)th node....
	else{


		int cnt = 1;
		Node* curr = head;
		Node* prev = NULL;
		
		while(cnt < pos){
			prev = curr;
			curr = curr -> next;
			cnt++;		
		}

		if(curr->next == NULL){
			tail = prev;
		}

		prev -> next = curr -> next;
		curr -> next = NULL;
		delete curr;
	}
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


bool isCircularLl(Node* head){

	if(head==NULL)
		return true;

	
	Node* temp = head -> next;

	while(temp!=NULL && temp!=head){
		temp = temp -> next;
	}

	if(temp == head){
		return true;
	}

	return false;

}


// detecting any loops in the linked list
bool detectLoop(Node* head){

	if(head == NULL)
		return true;

	map<Node*, bool> visited;
	Node* temp = head;

	while(temp != NULL){

		if(visited[temp] == true)
		{
			cout << "cycle is present" << endl;
			return true;
		}	

		visited[temp] = true;
		temp = temp -> next;

	}

	return false;
}



//finding the start of the cycle
Node *floydCycle(Node* head){
        
        if(head==NULL)
            return NULL;
        
        Node* slow = head;
        Node* fast = head;
        
        while( slow != NULL && fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow==fast)
                return slow;
        }
        
        return NULL;
    }
        
Node *startLoopNode(Node *head) {       
        Node* intersection = floydCycle(head);
        
        if(intersection == NULL)
            return NULL;
        
        Node* slow = head;
        
        while(slow != intersection){
            slow = slow -> next;
            intersection = intersection -> next;
        }
        
        return slow;
    }

void removeLoop(Node* &head){

	if(head == NULL)
		return;

	Node* startOfLoop = startLoopNode(head);

	Node* temp = startOfLoop;
	while(temp -> next != startOfLoop){
		temp = temp -> next;
	}

	temp -> next = NULL;

}

//traversing through the list and printing the data
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

	// insertAtPos(tail, head, 3, 22);
	// cout << "Insterted in between: " << endl;
	// print(head);

	// deleteNode(head, tail, 7);
	// print(head);

	// cout << "head -> " << head -> data << endl;
	// cout << "tail -> " << tail -> data << endl;

	
	// int n = getLen(head);
	// cout << endl << "Length of the list is: " << n << endl;


	tail -> next = head -> next;
	Node* ans = startLoopNode(head);

	cout << "startLoopNode -> data: " << ans -> data << endl;
	// if(ans == 1)
	// 	cout << "The linked list is circular" << endl;

	// else
	// 	cout << "The linked list is not circular" << endl;


	cout << tail -> next << endl;
	removeLoop(head);
	print(head);
	cout << tail -> next << endl;
	return 0;
}