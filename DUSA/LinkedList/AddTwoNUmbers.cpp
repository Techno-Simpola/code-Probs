#include<bits/stdc++.h>
#define ll long long
using namespace std;

// can be done in a single loop toooooooooooooooooo
class ListNode{

public:
    int val;
    ListNode* next;

    ListNode(int val){
        this -> val = val;
        this -> next = NULL;
    }

    ListNode *reverseLL(ListNode *head)
    {

        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forward = NULL;

        while (curr != NULL)
        {
            forward = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }

    void insertAtTail(ListNode* &head, ListNode* &tail, int val)
    {

        ListNode *temp = new ListNode(val);

        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode *addition(ListNode *first, ListNode *second)
    {
        int carry = 0;
        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;

        while (first != NULL && second != NULL)
        {

            int sum = carry + first->val + second->val;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;

            first = first->next;
            second = second->next;
        }

        while (first != NULL){
            int sum = carry + first->val;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;

            first = first->next;
        }

        while (second != NULL){
            int sum = carry + second->val;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;

            second = second->next;
        }

        while (carry != 0){
            int sum = carry;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
        }

        return ansHead;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){

        // step one... reverse the ListNodes
        ListNode *first = reverseLL(l1);
        ListNode *second = reverseLL(l2);

        // cout << first -> val << " " << second -> val << endl;
        ListNode *ans = addition(first, second);

        return ans;
    }
};

int main(){



    return 0;
}
