#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
};

// IMPORTANT
Node* createNode(int data){
    Node *n = new Node; // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created Node
}

int main(){
   
    // Constructing the root Node - Using Function (Recommended)
    Node *p = createNode(2);
    Node *p1 = createNode(1);
    Node *p2 = createNode(4);

    // Linking the root Node with left and right children
    p->left = p1;
    p->right = p2;

    cout<<p->data<<endl;
    cout<<p1->data<<endl;
    cout<<p2->data<<endl;
    return 0;
}
