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



Node * moveLastFirst(Node* &head)
{
    Node *p = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    q->next = head;
    head=q;
    return head;
}


int main(){
	Node *head=newNode(7);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(6);
    head->next->next->next->next = newNode(4);
    head->next->next->next->next->next = newNode(8);
    head->next->next->next->next->next->next = newNode(9);
    head->next->next->next->next->next->next->next = newNode(1);
    head->next->next->next->next->next->next->next->next = newNode(0);
    head->next->next->next->next->next->next->next->next->next = newNode(6);

    cout<<"Linked list before insertion\n";
    linkedListTraversal(head);
    moveLastFirst(head);
    cout<<"\nLinked list after insertion\n";
    linkedListTraversal(head);

    
    return 0;
}