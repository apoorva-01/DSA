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

void inOrder( Node* root){
    if(root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

// Time Complexity: O(log(n))
// int isBST( Node* root){
//     static Node *prev = NULL; // Static
//     if(root!=NULL){
//         if(!isBST(root->left)){
//             return 0;
//         }
//         else if(prev!=NULL && root->data <= prev->data){
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else{
//         return 1;
//     }
// }


bool recur(Node* root,long long low,long long high) {
    if(root==NULL){
        return true;
    }
    if(low<root->data && root->data<high){
        return  recur(root->left,low,root->data) && recur(root->right,root->data,high);
    }
    return false;
}
bool isValidBST(Node* root) {
    return recur(root,LONG_MIN,LONG_MAX);
}

int main(){
     
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

  
    inOrder(p);
    printf("\n");
    if(isValidBST(p)){
        cout<<"This is a bst"<<endl;
    }
    else{
        cout<<"This is not a bst"<<endl;
    }
    // if(isBST(p)){
    //     cout<<"This is a bst"<<endl;
    // }
    // else{
    //     cout<<"This is not a bst"<<endl;
    // }
    return 0;
}
