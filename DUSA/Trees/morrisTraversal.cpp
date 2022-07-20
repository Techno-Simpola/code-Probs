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


Node* findPred(Node* root){
	Node* pred = root->left;
    while(pred->right != NULL && pred->right != root)
        pred = pred -> right;

    return pred;
}

vector<int> morrisTraversal(Node* root, vector<int> &arr){
	
    vector<int> ans;
    if(root==NULL)
        return ans;

    Node* current = root;

    while(current){

        if(!current->left){
            ans.push_back(current->data);
            current = current->right;
        }

        else{
            Node* predecessor = findPred(current);

            if(predecessor->right == NULL){
                predecessor->right = current;
                current = current-> left;
            }

            else if(predecessor->right == current){
                predecessor->right = NULL;
                ans.push_back(current->data);
                current = current->right;
            }
        }

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

    cout << "Inorder Travelsal: " << endl;

    cout << "InOrder Traversal using recursion: " << endl;
    inorderTraversal(root);


    cout << "Inorder Traversal using Morris Traversal: " << endl;
    vector<int> morrisArr;
    morrisTraversal(root, morrisArr);

    for(auto i: morrisArr)
        cout << morrisArr[i] << " ";
    cout << endl;

    return 0;
}