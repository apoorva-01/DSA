#include<stdio.h>
#include<stdlib.h>

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
    while (ptr != NULL)
    {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }
    printf(" [null]\n");
}

// Case 1
Node * insertAtFirst(Node *head, int data){
    Node * ptr = new Node;
    ptr->data = data;
    ptr->next = head;
    return ptr; 
    // Time Complexity: O(1) 
}

// Case 2
Node * insertAtIndex(Node *head, int data, int index){
    Node * ptr = new Node;
    ptr->data = data;
    Node * p = head;
    int i = 0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
    // Time Complexity: O(n) 
}

// Case 3
Node * insertAtEnd(Node *head, int data){
    Node * ptr = new Node;
    ptr->data = data;
    Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
    // Time Complexity: O(n) 
}

// Case 4
Node * insertAfterNode(Node *head, Node *prevNode, int data){
    Node * ptr = new Node;
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
    // Time Complexity: O(1) 
}


int main(){
    Node *head=newNode(7);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(6);

    printf("Linked list before insertion\n");

    linkedListTraversal(head);
    head = insertAtFirst(head, 56);
    head = insertAtIndex(head, 66, 4);
    head = insertAtEnd(head, 69);
    // head = insertAfterNode(head, third, 45);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);

    
    return 0;
}