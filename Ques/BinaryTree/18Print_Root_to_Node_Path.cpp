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

bool path(Node* root,int nodeVal,vector<int>&res){
    if(root==NULL){
        return false;
    }
    res.push_back(root->data);
    if(root->data==nodeVal){
        return true;
    }
    if(path(root->left,nodeVal,res) || path(root->right,nodeVal,res)){
        return true;
    }
    res.pop_back();
    return false;
}



vector<int> sol(Node* root,int nodeVal)
{
    vector<int> res;
	path(root,nodeVal,res);
    return res;
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


    vector<int>res=sol(root,5);
    for(auto i:res){
        cout<<i<<" ";
    }

	return 0;
}
