// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// } Driver Code Ends
/* Structure of the linked list node is as
struct Node
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/

class Solution
{
public:
    // completing findMid() function
    Node *findMid(Node *head)
    {

        Node *slow = head;
        Node *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // completing mergeIt() function
    Node *mergeIt(Node *first, Node *second)
    {

        if (first == NULL)
            return second;

        if (second == NULL)
            return first;

        Node *ans = new Node(-1);
        Node *temp = ans;

        while (first != NULL && second != NULL)
        {

            if (first->data < second->data)
            {
                temp->next = first;
                temp = first;
                first = first->next;
            }
            else
            {
                temp->next = second;
                temp = second;
                second = second->next;
            }
        }

        while (first != NULL)
        {
            temp->next = first;
            temp = first;
            first = first->next;
        }

        while (second != NULL)
        {
            temp->next = second;
            temp = second;
            second = second->next;
        }

        ans = ans->next;
        return ans;
    }

    // Function to sort the given linked list using Merge Sort.
    Node *mergeSort(Node *head)
    {

        // base case
        if (head == NULL || head->next == NULL)
            return head;

        // finding mid and then left and right halves...(using fast-slow method)
        Node *mid = findMid(head);

        Node *left = head;
        Node *right = mid->next;
        mid->next = NULL;

        // sorting the halves using recursion
        left = mergeSort(left);
        right = mergeSort(right);

        // merging the halves...
        Node *result = mergeIt(left, right);

        return result;
    }
};

// { Driver Code Starts.

void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node **head_ref, int new_data)
{
    Node *new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main()
{
    long test;
    cin >> test;
    while (test--)
    {
        struct Node *a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
} // } Driver Code Ends