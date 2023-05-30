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

// apply the approach of reverse LL in k group
// find length of remaining node
// check if lenth >= k and next != null
// then recursive call the fn.
// Time complexity: O(n)

Node * reverseKGroup(Node* head,int k)
{
	Node * prev=NULL;
	Node * curr=head;
	Node * next=NULL;
	int count=0;
    while(curr && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    int len=0;
    Node* temp=next;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    if(next!=NULL && len>=k){
        head->next=reverseKGroup(next, k);
    }
    else{
        head->next=next;
    }
    return prev;
}


int main()
{
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

	printf("Given linked list\n");
	linkedListTraversal(head);
	head=reverseKGroup(head,2);
	printf("\nReversed Linked list \n");
	linkedListTraversal(head);
}
