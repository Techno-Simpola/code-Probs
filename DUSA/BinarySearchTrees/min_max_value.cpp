#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertToBst(Node *root, int data)
{

    // base case
    if (root == NULL)
    {
        Node *newNode = new Node(data);
        return newNode;
    }

    if (root->data < data)
        return insertToBst(root->right, data);

    else
        return insertToBst(root->left, data);

    return root;
}

void inputBST(Node *root)
{
    int d;
    cin >> d;

    while (d != -1)
    {
        root = insertToBst(root, d);
        cin >> d;
    }
}

int minValue(Node* root){
    Node* current = root;
    while(current->left)
    {
        current = current->left;
        cout << current->data << endl;
    }
    return current->data;
}

int maxValue(Node *root){
    Node* current = root;
    while(current->right)
        current = current->right;
    return current->data;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Node *root = NULL;
    inputBST(root);

    cout << "min value of the BST:" << endl;
    int minVal = minValue(root);
    // cout << minVal << endl;
    
    cout << endl;
    
    cout << "max value oof the BST:" << endl;
    // int maxVal = maxValue(root);
    // cout << maxVal << endl;
    return 0;
}