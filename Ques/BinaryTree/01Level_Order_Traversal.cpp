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

// Reccursive

/* Print nodes at a current level */
void printCurrentLevel(Node *root, int level)
{
	if (root == NULL)
		return;
	else if (level == 1)
		printf("%d ", root->data);
	else if (level > 1)

	{
		printCurrentLevel(root->left, level - 1);
		printCurrentLevel(root->right, level - 1);
	}
}
void printLevelOrder(Node *root)
{
	int h = height(root);
	int i;
	for (i = 1; i <= h; i++)
	{
		printCurrentLevel(root, i);
	}
}


// Iterartive
vector<vector<int>> levelOrder(Node* root) {
   	vector<vector<int>> res;
    if (root == NULL){return res;}
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
    	int size = q.size();
    	vector<int> level;
    	for (int i = 0; i < size; i++)
    	{
    		Node *node = q.front();
    		q.pop();
    		level.push_back(node->data);
    		if (node->left){q.push(node->left);}
    		if (node->right){q.push(node->right);}
    	}
    	res.push_back(level);
    }
    return res; 
}
int main()
{
	Node *root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);

	cout << "Level Order traversal using\n";
	printLevelOrder(root);
	cout << "\nLevel Order traversal using queue\n";
	vector<vector<int>> ans=levelOrder(root);
	for (vector<int> vect1D : ans)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }    
        cout << endl;
    }

	return 0;
}
