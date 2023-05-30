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


bool hasPathSum(Node* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        if(root->left==NULL && root->right==NULL && root->data==targetSum){
            return true;
        }
        bool left=hasPathSum(root->left, targetSum-root->data);
        bool right=hasPathSum(root->right, targetSum-root->data);

        return left || right;
}

int main()
{

	Node* tree = createNode(5);
	tree->left = createNode(3);
	tree->right = createNode(6);
	tree->left->left = createNode(2);
	tree->left->right = createNode(4);

	cout<<hasPathSum(tree,10)<<endl;
	cout<<hasPathSum(tree,70)<<endl;

	return 0;
}
