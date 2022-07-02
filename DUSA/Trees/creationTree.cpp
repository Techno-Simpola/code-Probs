#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Node{

public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(Node* root){
    int data;
    cout << "Enter the data:" << endl;
    cin >> data;

    root = new Node(data);

    if(data == -1)
        return NULL;

    cout << "Enter data for inserting left of root" << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting right of root" << endl;
    root->right = buildTree(root->right);

    return root;
}

//LEVEL ORDER TRAVERSAL
//redoooooooooooooooooo
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        if( temp == NULL ){
           
            //old level traversal has been completed
            cout << endl;
            //
            if(!q.empty()){
                q.push(NULL);
            }
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

int main(){
    Node* root = NULL;

    root = buildTree(root);

    //levelOrderTraversal ->> input : 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    levelOrderTraversal(root);

    //now we have to use the separator for the levelOrderTraversal (showing the tree as it is)...
    return 0;
}