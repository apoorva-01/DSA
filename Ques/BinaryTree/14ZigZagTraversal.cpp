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


vector<vector<int>> zigzag(Node* root) {
   	vector<vector<int>> res;
    if (root == NULL){return res;}
    queue<Node *> q;
    q.push(root);
    bool leftToRight=true;
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
        if(!leftToRight) reverse(level.begin(),level.end());
    	res.push_back(level);
        leftToRight=!leftToRight;
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


	vector<vector<int>> ans=zigzag(root);
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
