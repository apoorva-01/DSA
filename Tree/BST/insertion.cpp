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
// Time Complexity: log(h)
Node * insert(Node *root, int val){
    if (root==NULL)return createNode(val);
    Node* curr= root;
    while (true){
        if (curr->data > val){
            if(curr->left)curr= curr->left;
            else{
                curr->left= createNode(val);
                break;
            }
        }
        else{
            if(curr->right)curr= curr->right;
            else{
                curr->right= createNode(val);
                break;
            }
        }
    }
    return root;
}

Node* recurinsertIntoBST(Node* root, int val) {
    if (root==NULL){
        return createNode(val);
    } 
    if (root->data > val){
        root->left= recurinsertIntoBST(root->left,val);
    }
    else{
        root->right= recurinsertIntoBST(root->right,val);
    }
    return root;
}


int main(){
    Node *p = createNode(5);
    p->left = createNode(3);
    p->right = createNode(6);
    p->left->left = createNode(1);
    p->left->right = createNode(4);
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

    p=insert(p, 16);
    printf("%d", p->right->right->data);
    p=recurinsertIntoBST(p, 11);
    printf("%d", p->right->left->data);
    return 0;
}
