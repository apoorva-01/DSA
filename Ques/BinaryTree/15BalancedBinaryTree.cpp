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


// Naive-----Accepted
// O(n^2)
int height(Node* node)
{
	if (node == NULL)
		return 0;
	return 1 + max(height(node->left), height(node->right));
};
bool bruteisBalanced(Node* root)
{
	if (root == NULL)
		return 1;

	int lh = height(root->left);
	int rh = height(root->right);
	if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
        return 1;
    }
	/* If we reach here then tree is not height-balanced */
	return 0;
}


// Effecient  O(n)
int balanced(Node *node)
{
    if (node == NULL){return 0;}
    int lh=balanced(node->left);
    int rh=balanced(node->right);
    if(lh==-1 || rh==-1){return -1;}
    if(abs(rh-lh)>1){
        return -1;
    }
    return max(lh,rh)+1;
};

bool isBalanced(Node* root) {
    return balanced(root)!=-1;
}


int main()
{
	Node* root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->left->left->left = createNode(8);

	if (isBalanced(root))
		printf("Tree is balanced");
	else
		printf("Tree is not balanced");

	getchar();
	return 0;
}
