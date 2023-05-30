#include <iostream>
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

// Time complexity: O(N),
// Auxiliary Space: O(1)
bool detectLoop(Node* h)
{
	while (h != NULL) {
		// If this node is already traverse
		// it means there is a cycle
		// (Because you we encountering the
		// node for the second time).
		if (h->flag == 1)
			return true;

		// If we are seeing the node for
		// the first time, mark its flag as 1
		h->flag = 1;

		h = h->next;
	}

	return false;
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
		printf("Loop found");
	else
		printf("No Loop");

	return 0;

    
}