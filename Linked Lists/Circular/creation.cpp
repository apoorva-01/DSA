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

int main(){
 
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

    circularlinkedListTraversal(head);
 
    return 0;
}
