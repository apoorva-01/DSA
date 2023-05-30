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

bool circular(Node *head) {
    Node *p=head->next;
    while(p!=head){
        p=p->next;
    }
    if(p==head){return true;}
    return false;
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

    cout<<circular(head);
 
    return 0;
}
