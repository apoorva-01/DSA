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




Node*  middleDelete(Node* head) {
    if( !head || !head -> next ) return NULL ;
        
    // Since we do not access the members within null pointers
    Node* s = newNode(0) ;
    Node* f = s ;
    
    s -> next = head ;
    f -> next = head ;
    
    // Find the middle of the linked list : Tortoise Method 
    while( f->next && f->next->next ){
        s = s -> next ;
        f = f -> next -> next ;
    }
    
    // Delete a node in a Linked list 
    s -> next = s -> next -> next ;
    
    return head ;
}


int main()
{
	Node *head=newNode(7);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(3);
    head->next->next->next->next = newNode(6);
    head->next->next->next->next->next = newNode(2);
    head->next->next->next->next->next->next = newNode(3);

	printf("Given linked list\n");
	linkedListTraversal(head);
	middleDelete(head);
	linkedListTraversal(head);
	
}
