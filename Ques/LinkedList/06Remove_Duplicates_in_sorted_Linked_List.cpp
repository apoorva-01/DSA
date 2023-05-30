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


Node* removeDuplicates(Node *&head)
{
    if(head==NULL){
        return head;
    }
    Node* p=head;
    while(p->next!=NULL){
        if(p->data==p->next->data){
            p->next=p->next->next;
        }
        else{
            p=p->next;
        }
    }
    return head;
}

int main()
{
    Node *head=newNode(2);
    head->next = newNode(3);
    head->next->next = newNode(5);
    head->next->next->next = newNode(5);
    head->next->next->next->next = newNode(8);
    head->next->next->next->next->next = newNode(8);
    head->next->next->next->next->next->next = newNode(9);
    removeDuplicates(head);
    linkedListTraversal(head);
    return 0;
}
