#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data){
    Node *n = new Node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n; 
}

// Time Complexity O(n)
// Space Complexity O(n)
int findHeight(Node *node)
{
    if (node == NULL)
        return 0;
    return 1 + max(findHeight(node->left), findHeight(node->right));
};

// Time Complexity O(n)
// Space Complexity O(n)
int countNodes(Node *node)
{
    if (node == NULL)
        return 0;
    return 1 + countNodes(node->left)+ countNodes(node->right);
};

// Time Complexity O(n)
// Space Complexity O(n)
int depthOfNodes(Node *node,int x)
{
    if (node == NULL)
        return -1;
    int depth =-1;
    if(node->data==x || (depth=depthOfNodes(node->left,x))>=0 ||  (depth=depthOfNodes(node->right,x))>=0){
        depth++;
    }
    return depth;
};


int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
      // Finally The tree looks like this:
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5  

    cout<<"Height of binary tree is "<<findHeight(root)<<endl;
    cout<<"Height of node value 3 is  "<<findHeight(root->right)<<endl;
    cout<<"Number of nodes are  "<<countNodes(root)<<endl;
    cout<<"Depth of Node root is  "<<depthOfNodes(root,1)<<endl;
    cout<<"Depth of Node value 4 is  "<<depthOfNodes(root,4)<<endl;
    cout<<"Depth of Node value 2 is  "<<depthOfNodes(root,2)<<endl;

    return 0;
}
