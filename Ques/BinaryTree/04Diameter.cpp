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


int height(Node* node)
{
	// base case tree is empty
	if (node == NULL)
		return 0;

	// If tree is not empty then height = 1 + max of left height and right heights
	return 1 + max(height(node->left), height(node->right));
}


int diameter(Node* tree)
{

	if (tree == NULL)
		return 0;

	// get the height of left and right sub-trees
	int lheight = height(tree->left);
	int rheight = height(tree->right);

	// get the diameter of left and right sub-trees
	int ldiameter = diameter(tree->left);
	int rdiameter = diameter(tree->right);

	// Return max of following three
	// 1) Diameter of left subtree
	// 2) Diameter of right subtree
	// 3) Height of left subtree + height of right subtree + 1

	return max(lheight + rheight,max(ldiameter, rdiameter));
}




int main()
{

	/* 
			1
			/ \
		  2	 3
		/ \
	  4	 5
      
	*/
	Node* root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);

	printf("Diameter of the given binary tree is %d\n",diameter(root));

	return 0;
}
