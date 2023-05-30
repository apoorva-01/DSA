#include <iostream>
using namespace std;

// Que---- https://leetcode.com/problems/swap-nodes-in-pairs/description/

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

// RECURSIVE APPROACH ----ACCEPTED
Node* mergeTwoLists(Node* list1, Node* list2) {
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    if(list1->data<=list2->data){
        list1->next=mergeTwoLists(list1->next,list2);
        return list1;
    }
    else{
        list2->next=mergeTwoLists(list2->next,list1);
        return list2;
    }
}
// ITERATIVE APPROACH ----ACCEPTED
Node* mergeTwoListsIterative(Node* list1, Node* list2) {
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    Node* p=list1;
    if(list1->data>list2->data){
       p=list2;
       list2=list2->next;
    }
    else{
        list1=list1->next;
    }
    Node* curr=p;
    while(list1 && list2){
        if(list1->data<=list2->data){
            curr->next=list1;
            list1=list1->next;
        }
        else{
            curr->next = list2;
            list2 = list2 -> next;
        }
        curr = curr -> next;
    }
    // adding remaining elements of bigger list.
    if(list2)
        curr -> next = list2;
    else
        curr -> next = list1;
    return p;
}


int main()
{
	Node *head1=newNode(2);
    head1->next = newNode(3);
    head1->next->next = newNode(5);
    head1->next->next->next = newNode(6);
    head1->next->next->next->next = newNode(8);

	Node *head2=newNode(1);
    head2->next = newNode(3);
    head2->next->next = newNode(4);
    head2->next->next->next = newNode(7);
    head2->next->next->next->next = newNode(9);


	Node *res1=mergeTwoLists(head1,head2);
	linkedListTraversal(res1);
	Node *res2=mergeTwoListsIterative(head1,head2);
	linkedListTraversal(res2);
	
}
