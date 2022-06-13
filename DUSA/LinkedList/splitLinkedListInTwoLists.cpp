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

int length(Node *head)
{
    int cnt = 0;
    Node *temp = head->next;
    while (temp != head)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void splitCircularList(Node *head)
{
    if (head == NULL)
        return;

    int totalLength = length(head);

    int pos1 = totalLength / 2;
    //     cout << "Pos1 -> " << pos1 << endl;
    Node *curr = head;
    while (pos1 > 0)
    {
        pos1--;
        curr = curr->next;
    }

    Node *newHead1 = curr->next;

    //     cout << "curr -> next -> data: " << curr->next->data << endl;
    curr->next = head;
    head = newHead1;

    // good till now...
    pos1 = totalLength / 2;
    Node *temp = head;
    while (pos1 > 0)
    {
        temp = temp->next;
        pos1--;
    }

    Node *newHead2 = temp->next;
    temp->next = head;
}

// int main(){
//     return 0;
// }
