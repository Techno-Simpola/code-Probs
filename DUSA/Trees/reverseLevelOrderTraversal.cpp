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

// LEVEL ORDER TRAVERSAL
// redoooooooooooooooooo
void reverseLevelOrderTraversal(Node *root){

    vector<int> ans;
    stack<int> st;
    queue<Node*> q;

    q.push(root);
    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        if(current->right){
            q.push(current->right);
        }
        if(current->left){
            q.push(current->left);
        }   

        st.push(current->data);
    }

    while(!st.empty()){
        int temp = st.top();
        ans.push_back(temp);
        st.pop();
    }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " " ;
    }
    cout << endl;
}

int main()
{
    Node *root = NULL;

    root = buildTree(root);

    // levelOrderTraversal ->> input : 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    reverseLevelOrderTraversal(root);

    // now we have to use the separator for the levelOrderTraversal (showing the tree as it is)...
    return 0;
}