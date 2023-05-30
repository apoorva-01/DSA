#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void circularlinkedListTraversal(Node *head)
{
    Node *ptr = head;
    do
    {
       cout<<ptr->data<<"=>";
        ptr = ptr->next;
    } while (ptr != head);
    // Time Complexity: O(n)
}

// Time Complexity: O(n)
Node *insertAtFirst(Node *head, int data)
{
    Node *ptr = new Node;
    ptr->data = data;

    Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;

    printf("Circular Linked list before insertion\n");
    circularlinkedListTraversal(head);
    head = insertAtFirst(head, 54);
    head = insertAtFirst(head, 58);
    head = insertAtFirst(head, 59);
    printf("Circular Linked list after insertion\n");
    circularlinkedListTraversal(head);

    return 0;
}
