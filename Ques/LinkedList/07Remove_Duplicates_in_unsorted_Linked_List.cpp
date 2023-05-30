#include <bits/stdc++.h>
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
    // Time Coslexity: O(n)
}


Node* removeDuplicates(Node *&head)
{
    unordered_set<int> s;
    Node *curr=head;
    Node *prev=NULL;
    while(curr != NULL){
        if(s.find(curr->data) != s.end()){
             prev->next = curr->next;
            delete (curr);
        }
        else {
            s.insert(curr->data);
            prev = curr;
        }
        curr=prev->next;
    }
    return head;
}

int main()
{
    Node *head=newNode(4);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(4);
    head->next->next->next->next  = newNode(7);
    head->next->next->next->next->next  = newNode(2);
    head->next->next->next->next->next->next  = newNode(1);
    removeDuplicates(head);
    linkedListTraversal(head);
    return 0;
}
