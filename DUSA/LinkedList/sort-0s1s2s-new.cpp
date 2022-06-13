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
};

// inserting at tail
void insertAtTail(Node *&tail, Node *&temp)
{
    tail->next = temp;
    tail = temp;
}

// merging all the separate lists...
Node *mergingOP(Node *zeroHead, Node *zeroTail, Node *oneHead, Node *oneTail, Node *twoHead, Node *twoTail)
{

    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }

    twoTail->next = NULL;
    return zeroHead->next;
}

// created separate lists
Node *sortList(Node *head)
{
    // Write your code here.
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;
    Node *temp = head;
    while (temp != NULL)
    {
        int val = temp->data;
        if (val == 0)
            insertAtTail(zeroTail, temp);
        else if (val == 1)
            insertAtTail(oneTail, temp);
        else
            insertAtTail(twoTail, temp);
        temp = temp->next;
    }

    Node *ans = mergingOP(zeroHead, zeroTail, oneHead, oneTail, twoHead, twoTail);

    return ans;
}
