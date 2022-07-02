#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree(Node *root)
{
    int data;
    cout << "Enter the data:" << endl;
    cin >> data;

    root = new Node(data);

    if (data == -1)
        return NULL;

    cout << "Enter data for inserting left of root" << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting right of root" << endl;
    root->right = buildTree(root->right);

    return root;
}

void inorderTraversal(Node *root){
    //base case
    if(root == NULL)
        return;
    
    //L
    inorderTraversal(root->left);   
    //N
    cout << root -> data << " ";
    //R
    inorderTraversal(root->right); 
}

int main()
{
    Node *root = NULL;

    root = buildTree(root);

    cout << "Inorder Travelsal: " << endl;
    inorderTraversal(root);
    return 0;
}