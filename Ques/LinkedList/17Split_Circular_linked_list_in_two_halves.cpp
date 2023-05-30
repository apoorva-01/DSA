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
    cout<<endl;
}

Node * split(Node *&head) {
    Node *slow=head;
    Node *fast=head;
    Node *tail=head;
    while(tail->next!=head){
        tail=tail->next;
    }
    while(fast->next != head && fast->next->next != head)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
    Node *middle=slow;
    tail->next=middle->next;
    middle->next=head;
    return tail->next;
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

    Node *head2=split(head);
    circularlinkedListTraversal(head);
    circularlinkedListTraversal(head2);
 
    return 0;
}
