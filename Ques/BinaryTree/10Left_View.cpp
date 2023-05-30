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




void recursive(Node* root,int level,vector<int> &res) {
    if(root==NULL){
        return;
    }
    if(level==res.size()){
        res.push_back(root->data);
    }
    recursive(root->left,level+1,res);
    recursive(root->right,level+1,res);
}

vector<int> leftSideView(Node* root) {
    vector<int>res;
    recursive(root,0,res);
    return res;
    
}

int main()
{
	Node *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);

    //     1
    //    / \
    //    2  3
    //    / \
    //    4  5
	printf("Level View of binary tree is \n");
	leftSideView(root);

	return 0;
}
