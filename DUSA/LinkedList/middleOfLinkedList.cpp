#include <bits/stdc++.h>
#define ll long long
using namespace std;


class Node{
    public:
        int val;
        Node* next;

    Node(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

void middleLL(Node* &head){

    int cnt = 1;
    Node* temp = head;
    Node *flag = head;
    while(temp->next != NULL){
        temp = temp->next;
        cnt++;
    }

    int pos = cnt / 2;

    while(pos>0){
        flag = flag->next;
        pos -- ;
    }

    cout << "middle Linked List: " << flag -> val << endl;

}

void insertNode(Node* &head, int val){

    Node* temp = new Node(val);
    temp -> next = head;
    head = temp; 
}

void printNode(Node* &head){

    Node* temp = head;
    while (temp->next != NULL)
    {
        cout << temp->val << " ";
        temp = temp -> next;
    }

    cout << endl;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Node* node = new Node(10);

    Node* head = node;
    insertNode(head, 5);
    insertNode(head, 7);
    insertNode(head, 14);
    insertNode(head, 19);

    middleLL(head);
    printNode(head);
    return 0;

}