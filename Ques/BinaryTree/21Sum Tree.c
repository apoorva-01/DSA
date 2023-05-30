#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;                                 // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data;                                 // Setting the data
    n->left = NULL;                                 // Setting the left and right children to NULL
    n->right = NULL;                                // Setting the left and right children to NULL
    return n;                                       // Finally returning the created node
}


int toSumTree(struct node *node)
{
    // Base case
    if (node == NULL)
        return 0;

    // Store the old value
    int old_val = node->data;

    // Recursively call for left and right subtrees and store the sum as
    // new value of this node
    node->data = toSumTree(node->left) + toSumTree(node->right);

    // Return the sum of values of nodes in left and right subtrees and
    // old_value of this node
    return node->data + old_val;
}


void printInorder(struct node *node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}



int main()
{
    struct node *root = NULL;
    int x;

    root = createNode(10);
    root->left = createNode(-2);
    root->right = createNode(6);
    root->left->left = createNode(8);
    root->left->right = createNode(-4);
    root->right->left = createNode(7);
    root->right->right = createNode(5);

    toSumTree(root);

    // Print inorder traversal of the converted tree to test result of toSumTree()
    printf("Inorder Traversal of the resultant tree is: \n");
    printInorder(root);

    return 0;
}
