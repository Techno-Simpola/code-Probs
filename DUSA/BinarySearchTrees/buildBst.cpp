#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertToBst(Node* root, int data){

    //base case
    if(root == NULL){
        Node* newNode = new Node(data);
        return newNode;
    }

    if(root->data < data)
        return insertToBst(root->right, data);
    
    else
        return insertToBst(root->left, data);
    
    return root;
}

void inputBST(Node* root){
    int d; cin >> d;

    while(d != -1){
        root = insertToBst(root, d);
        cin >> d;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node *temp = q.front();
        q.pop();

        if (temp == NULL){
            // old level traversal has been completed
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }

        else{
            cout << temp->data << " ";
            if (temp->left != NULL)
                q.push(temp->left);

            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}

int main()
{   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Node* root = NULL;
    inputBST(root);


    //levelorder traversal
    cout << "Level Order Traversal of the input array" << endl;
    levelOrderTraversal(root);
    return 0;
}