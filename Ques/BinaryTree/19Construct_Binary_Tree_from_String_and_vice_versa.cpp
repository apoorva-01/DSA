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

string tree2str(Node* root) {
    string ans = to_string(root->data);
	if (root->left) //left side check
		ans += "(" + tree2str(root->left) + ")";
	if (root->right) { //right side check
		if (!root->left) ans += "()"; //left side not present, but right side present
		ans += "(" + tree2str(root->right) + ")"; 
	}
	return ans;
}

Node* str2tree(string str) {
    
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


    cout<<tree2str(root);
    

	return 0;
}
