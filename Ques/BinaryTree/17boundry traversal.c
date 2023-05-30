#include <stdio.h>
#include <stdlib.h>


struct node {
	int data;
	struct node *left, *right;
};


void printLeaves(struct node* root)
{
	if (root == NULL)
		return;

	printLeaves(root->left);

	// Print it if it is a leaf node
	if (!(root->left) && !(root->right))
		printf("%d ", root->data);

	printLeaves(root->right);
}


void printBoundaryLeft(struct node* root)
{
	if (root == NULL)
		return;

	if (root->left) {

		// to ensure top down order, print the node
		// before calling itself for left subtree
		printf("%d ", root->data);
		printBoundaryLeft(root->left);
	}
	else if (root->right) {
		printf("%d ", root->data);
		printBoundaryLeft(root->right);
	}
	// do nothing if it is a leaf node, this way we avoid
	// duplicates in output
}


void printBoundaryRight(struct node* root)
{
	if (root == NULL)
		return;

	if (root->right) {
		// to ensure bottom up order, first call for right
		// subtree, then print this node
		printBoundaryRight(root->right);
		printf("%d ", root->data);
	}
	else if (root->left) {
		printBoundaryRight(root->left);
		printf("%d ", root->data);
	}
	// do nothing if it is a leaf node, this way we avoid
	// duplicates in output
}

// A function to do boundary traversal of a given binary tree
void printBoundary(struct node* root)
{
	if (root == NULL)
		return;

	printf("%d ", root->data);

	// Print the left boundary in top-down manner.
	printBoundaryLeft(root->left);

	// Print all leaf nodes
	printLeaves(root->left);
	printLeaves(root->right);

	// Print the right boundary in bottom-up manner
	printBoundaryRight(root->right);
}

// A utility function to create a node
struct node* newNode(int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;
	temp->left = temp->right = NULL;

	return temp;
}

// Driver program to test above functions
int main()
{
	// Let us construct the tree given in the above diagram
	struct node* root = newNode(20);
	root->left = newNode(8);
	root->left->left = newNode(4);
	root->left->right = newNode(12);
	root->left->right->left = newNode(10);
	root->left->right->right = newNode(14);
	root->right = newNode(22);
	root->right->right = newNode(25);

	printBoundary(root);
	return 0;
}
// This code has been contributed by Aditya Kumar (adityakumar129)
