#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data){
    Node *n = new Node; // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created Node
}


void preOrder( Node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void iterativePreorder(Node* root)
{
    if (root == NULL)
        return;
    // Create an empty stack and push root to it
    stack<Node*> st;
    st.push(root);
 
    /* Pop all items one by one. Do following for every popped item
       a) print it
       b) push its right child
       c) push its left child
    Note that right child is pushed first so that left is processed first */
    while (!st.empty()) {
        
        struct Node* node = st.top();
        cout<<node->data<<" "; // Pop the top item from stack and print it
        st.pop();
 
        // Push right and left children of the popped Node to stack
        if (node->right)
            st.push(node->right);
        if (node->left)
            st.push(node->left);
    }
}

void postOrder( Node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}


void inOrder( Node* root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}


void iterativeInorder(Node* root){
    if(root==NULL){return;}
    stack<Node*> st;
    Node* node=root;
    while(true){
        if(node){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()){break;}
            node=st.top();
            st.pop();
            cout<<node->data<<" ";
            node=node->right;
        }
    }
    return ;
}


int main(){
    // Constructing the root Node - Using Function (Recommended)
    Node *p = createNode(4);
    p->left = createNode(1);
    p->right = createNode(6);
    p->left->left = createNode(5);
    p->left->right = createNode(2);
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2  

    cout<<"Recurrsive Preorder"<<endl;
    preOrder(p);
    cout<<endl;
    cout<<"Iterative Preorder"<<endl;
    iterativePreorder(p);
    cout<<endl;
    cout<<"Recurrsive Postorder"<<endl;
    postOrder(p);
    cout<<endl;
    // cout<<"Iterative Post order"<<endl;
    // iterativePostorder(p);
    // cout<<endl;
    cout<<"Recurrsive Inorder"<<endl;
    inOrder(p);
    cout<<"Iterative Inorder"<<endl;
    iterativeInorder(p);
    cout<<endl;
    return 0;
}






