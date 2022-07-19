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


bool searchInBST(Node* root, int x){
    //base case
    if (root == NULL)
        return false;
    
    if(root->data < x)
        return searchInBST(root->right, x);
    else if(root->data > x)
        return searchInBST(root->left, x);
    else
        return true;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    Node* root = NULL;

    inputBST(root);
    
    int x; 
    cout << "Enter the element tot be searched: " << endl;
    cin >>x;
    bool ans = searchInBST(root, x);
    return 0;
}