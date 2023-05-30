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
     
    Node *p = createNode(5);
    p->left = createNode(3);
    p->right = createNode(6);
    p->left->left = createNode(1);
    p->left->right = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

    cout<<"Height binary tree is "<<findHeight(p)<<endl;

    return 0;
}
