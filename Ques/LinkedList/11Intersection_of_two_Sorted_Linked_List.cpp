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
    // Time Complexity: O(n)
}



// HashMap Solution
// Time Complexity : O(m + n)
// Space Complexity : O(m)
Node *getIntersectionNode(Node *headA, Node *headB) {
    unordered_map<Node*,int> mp;
    while(headA){
        mp[headA]++;
        headA = headA -> next;
    }
    while(headB){
        if(mp.find(headB)!=mp.end()){
            return headB;
        }
        headB = headB -> next;
    }
    return NULL;
}

// Brute Force------Accepted
// Time Complexity : O(n^2)
// Space Complexity : O(1)
Node *brute(Node *headA, Node *headB) {
    Node *temp;
    while(headA!=NULL){
        temp=headB;
        while(temp!=NULL){
            if(temp==headA){
                return temp;
            }
        temp=temp->next;
        }
    headA=headA->next;
    }
    return NULL;
}





int main()
{
    Node *head1=newNode(2);
    head1->next = newNode(3);
    head1->next->next = newNode(5);
    head1->next->next->next = newNode(7);


    Node *head2=newNode(1);
    head2->next =head1;
    head2->next->next = newNode(3);
    head2->next->next->next = newNode(4);
    linkedListTraversal(head1);
    linkedListTraversal(head2);
    cout<<"Intersection Point is "<<getIntersectionNode(head1,head2)->data<<endl;
    cout<<"Intersection Point is "<<brute(head1,head2)->data<<endl;
    return 0;
}
