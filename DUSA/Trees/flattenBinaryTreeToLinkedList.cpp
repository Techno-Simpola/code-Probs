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

Node *buildTree(Node *root){
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

// void inorderTraversal(Node *root){
//     //base case
//     if(root == NULL)
//         return;
    
//     //L
//     inorderTraversal(root->left);   
//     //N
//     cout << root -> data << " ";
//     //R
//     inorderTraversal(root->right); 
// }


// Node* findPred(Node* root){
// 	Node* pred = root->left;
//     while(pred->right != NULL && pred->right != root)
//         pred = pred -> right;

//     return pred;
// }

vector<int> flattenBinaryTreeToLinkedList(Node* root, vector<int> &arr){
	
    vector<int> ans;
    Node* current = root;
    while(current){
        if(current->left){

            Node* pred = current -> left;
            while(pred->right)
                pred=pred->right;
            
            pred->right=current->right;
            current->right=current->left;
            current->left=NULL;
        }
        cout << current->data << " ";
        current = current -> right;
    }

    return ans;
}



int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    Node *root = NULL;

    root = buildTree(root);

    // cout << "Inorder Travelsal: " << endl;

    // cout << "InOrder Traversal using recursion: " << endl;
    // inorderTraversal(root);


    cout << "Inorder Traversal using Morris Traversal: " << endl;
    vector<int> arr;
    cout << endl;
    flattenBinaryTreeToLinkedList(root, arr);

    // for(int i=0; i<arr.size(); i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    return 0;
}