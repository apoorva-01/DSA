#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    int flag;
    Node * next;
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
Node* deleteLoop(Node* &head)
{
    Node * prev;
	Node * slow=head;
    Node * fast=head;
    Node * meet;
    Node *start=head;
    while(slow && fast && fast->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            meet= slow;
        }
    }
    cout<<meet->data;
    if(meet!=NULL){
        while(start!=meet){
            meet=meet->next;
            start=start->next;
            prev=prev->next;
        }
        return start;
    }
    prev->next=NULL;
    return head;
}




int main(){
    Node *head=newNode(7);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(6);
    head->next->next->next->next = newNode(6);
    head->next->next->next->next->next = newNode(8);
    head->next->next->next->next->next->next = newNode(9);
    head->next->next->next->next->next->next->next = newNode(1);
    head->next->next->next->next->next->next->next->next = newNode(0);
    head->next->next->next->next->next->next->next->next->next =head;

    cout<<"Loop Deleted"<<endl;
	deleteLoop(head);
    linkedListTraversal(head);
	return 0;

    
}