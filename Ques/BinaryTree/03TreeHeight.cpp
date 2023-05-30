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


int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout<<"Height binary tree is "<<findHeight(root)<<endl;

    return 0;
}
