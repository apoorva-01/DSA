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

void deleteAtEnd(Node* &head) {
    if (head==NULL || head->next==NULL)return;
    Node *p = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
}


Node * remove(Node* &head,int val)
{
	Node* curr=head;
    while(curr){
        if(curr->data==val){
            // first node
            if (curr == head){
                head= head->next;
                curr= curr->next;
            }
            // Remove end node
            else if(curr->next==NULL){
                deleteAtEnd(head);
                curr= NULL;
            }
            // node in between
            else{
                curr->data= curr->next->data;
                curr->next= curr->next->next;
            }
        }
        else{
            curr = curr->next;
        }
    }
       
        return head;
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
	remove(head,3);
	printf("\nRemove all the nodes of the linked list that has value 3 \n");
	linkedListTraversal(head);
}
