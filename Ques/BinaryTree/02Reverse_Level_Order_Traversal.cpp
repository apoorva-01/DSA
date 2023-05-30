#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;
};

Node *createNode(int data)
{
	Node *n = new Node;
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}

int height(Node *node)
{
	if (node == NULL)
		return 0;
	return 1+max(height(node->left),height(node->right));
}




/* Print nodes at a current level */
void printCurrentLevel(Node* root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		printf("%d ", root->data);
	else if (level > 1) {
		printCurrentLevel(root->left, level - 1);
		printCurrentLevel(root->right, level - 1);
	}
}


void printLevelOrder(Node* root)
{
	int h = height(root);
	int i;
	for (i = h; i >= 1; i--){
        printCurrentLevel(root, i);
    }
		
}


int main()
{
	Node* root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);

	printf("Level Order traversal of binary tree is \n");
	printLevelOrder(root);

	return 0;
}
