#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    int flag;
    Node * next;
};
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

//  Floyd’s Cycle-Finding Algorithm: Slow and Fast Pointer
// Time complexity: O(N),
// Auxiliary Space: O(1)
Node* detectLoop(Node* head)
{
	Node * s=head;
    Node * f=head;
    while(s && f && f->next){
        s=s->next;
        f=f->next->next;
        if(s==f){
            return s;
        }
    }
    return NULL;
}

// Using Hash----Accepted
// Time Complexity O(n)
// Space Complexity O(n)
Node* hashFunc(Node *head) {
    unordered_set<Node *> s;
    Node *p=head;
    while(p){
        if(s.find(p)!=s.end()){
            return p;
        }
        s.insert(p);
        p=p->next;
    }
    return NULL;
}


int main(){
    Node *head=newNode(7);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(6);
    head->next->next->next->next = newNode(6);
    head->next->next->next->next->next = newNode(8);
    head->next->next->next->next->next->next = newNode(9);
    head->next->next->next->next->next->next->next = newNode(1);
    head->next->next->next->next->next->next->next->next = newNode(0);
    head->next->next->next->next->next->next->next->next->next =head;

	if (detectLoop(head))
		cout<<"Loop found at :"<<detectLoop(head)->data<<endl;
	else
		cout<<"No Loop"<<endl;


	if (hashFunc(head))
		cout<<"Loop found at :"<<detectLoop(head)->data<<endl;
	else
		cout<<"No Loop"<<endl;

	return 0;

    
}