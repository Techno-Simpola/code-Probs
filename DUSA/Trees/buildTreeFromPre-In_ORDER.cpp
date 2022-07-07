// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printPostOrder(Node *root)
{
    if (root == NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

// } Driver Code Ends

class Solution
{
public:
    // int findPostion(int inOrder[], int n, int element)
    // {

    //     for (int i = 0; i < n; i++)
    //     {
    //         if (inOrder[i] == element)
    //             return i;
    //     }

    //     return -1;
    // }

    void createMapping(map<int, int> &mp, int inOrder[], int n){
        for(int i=0;i<n;i++){
            mp[inOrder[i]] = i;
        }
    }

    Node *solve(int in[], int pre[], int &indexPre, int startIn, int endIn, int n, map<int, int> &mp)
    {

        if (indexPre >= n || startIn > endIn)
            return NULL;

        int element = pre[indexPre++];

        Node *current = new Node(element);
        int pos = mp[element];

        // recursive calls
        current->left = solve(in, pre, indexPre, startIn, pos - 1, n, mp);
        current->right = solve(in, pre, indexPre, pos + 1, endIn, n, mp);

        return current;
    }

    Node *buildTree(int in[], int pre[], int n)
    {
        int indexPre = 0;
        map<int, int> mp;
        createMapping(mp, in, n);
        Node *ans = solve(in, pre, indexPre, 0, n - 1, n, mp);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int inorder[n], preorder[n];
        for (int i = 0; i < n; i++)
            cin >> inorder[i];
        for (int i = 0; i < n; i++)
            cin >> preorder[i];
        Solution obj;
        Node *root = obj.buildTree(inorder, preorder, n);
        printPostOrder(root);
        cout << endl;
    }
}
// } Driver Code Ends