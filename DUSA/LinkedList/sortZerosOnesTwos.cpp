#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Node{
public:
    int data ;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


Node *sortList(Node *head)
{
    // Write your code here
    int zero = 0;
    int one = 0;
    int two = 0;

    Node *temp = head;
    // counting number of 0s,1s and 2s.
    while (temp != NULL)
    {
        if (temp->data == 0)
            zero++;
        else if (temp->data == 1)
            one++;
        else
            two++;
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {

        if (zero > 0)
        {
            temp->data = 0;
            zero--;
        }

        else if (one > 0)
        {
            temp->data = 1;
            one--;
        }

        else
        {
            temp->data = 2;
            two--;
        }

        temp = temp->next;
    }

    return head;
}

// int main(){
//     return 0;
// }
