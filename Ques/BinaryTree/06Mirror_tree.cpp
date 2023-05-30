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

void inorder(Node* root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);
}

Node* invertTree(Node* root) {
        if(root==NULL){
            return NULL;
        }
        Node* temp=root->right;
        root->right=root->left;
        root->left=temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }

int main()
{

	Node* tree = createNode(5);
	tree->left = createNode(3);
	tree->right = createNode(6);
	tree->left->left = createNode(2);
	tree->left->right = createNode(4);

	// Print inorder traversal of the input tree
	printf("Inorder of original tree: ");
	inorder(tree);
	Node* mirror=invertTree(tree);

	// Print inorder traversal of the mirror tree
	printf("\nInorder of mirror tree: ");
	inorder(mirror);

	return 0;
}
