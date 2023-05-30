#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void linkedListTraversal(Node *ptr)
{
    printf("[head] =>");
    // start from the beginning
    while (ptr != NULL)
    {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }
    printf(" [null]\n");
    // Time Complexity: O(n)
}



Node * reverse(Node* head)
{
	Node *prev=NULL;
	Node *curr=head;
	Node *next=NULL;
	while(curr){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}

Node* reverse(Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;
    /* reverse the rest list and put the first element at the end */
    Node* rest = reverse(head->next);
    head->next->next = head;
    /* tricky step -- see the diagram */
    head->next = NULL;
    /* fix the head pointer */
    return rest;
}


int main()
{
	Node *head=newNode(7);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(6);

	printf("Given linked list\n");
	linkedListTraversal(head);
	head=reverse(head);
	printf("\nReversed Linked list \n");
	linkedListTraversal(head);
}
