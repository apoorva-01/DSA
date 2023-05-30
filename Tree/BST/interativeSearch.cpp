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

// Time Complexity: log(n)
// Recursive Approach has a space complexity of O(log n) while the Iterative Approach has a space complexity of O(1).
Node * searchIter(Node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}

// Time Complexity: log(n)
// Recursive Approach has a space complexity of O(log n) while the Iterative Approach has a space complexity of O(1).
Node * searchRecur(Node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return searchRecur(root->left, key);
    }
    else{
        return searchRecur(root->right, key);
    }
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


    Node* i = searchIter(p, 6);
    if(i!=NULL){
        cout<<"Found Iterative:"<< i->data<<endl;
    }

    Node* r = searchRecur(p, 6);
    if(r!=NULL){
        cout<<"Found Recur:"<< r->data<<endl;
    }
    
    return 0;
}
