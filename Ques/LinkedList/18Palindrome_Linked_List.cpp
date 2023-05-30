#include <bits/stdc++.h>
using namespace std;

// Que---- https://leetcode.com/problems/palindrome-linked-list/description/
// Ans---- https://leetcode.com/problems/palindrome-linked-list/solutions/2969651/o-n-c-solution-with-vector-java-solution-with-arraylist/

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


// Time Complexity O(n)
// Space Complexity O(n)
bool isPalindrome(Node* head) {
    vector<int>  values;
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        values.push_back(tmp->data); //store values in vector
        tmp=tmp->next;
    }
    values.push_back(tmp->data);
    int n=values.size();
    for(int i=0; i<(n/2); i++) // check that values are palindrome or not
    {
        if(values[i]!=values[n-i-1]){
            return false;
        }
    }
    return true;
}

// Using Reverse and comparing-----Accepted
Node * reverse(Node* head)
{
	Node *prev=NULL;
	Node *curr=head;
	Node *next=NULL;
	while(curr){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}

// Time Complexity O(n)
// Space Complexity O(n)
bool isPalindromeUsingReverse(Node* head) {
    Node *revHead=reverse(head);
    Node *p1=head;
    Node *p2=revHead;
    while(p1){
        if(p1->data!=p2->data){
            return false;
        }
        p1=p1->next;
        p2=p2->next;
    }
    return true;
}


int main()
{
	Node *head=newNode(7);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(3);
    head->next->next->next->next = newNode(1);
    head->next->next->next->next->next = newNode(3);
    head->next->next->next->next->next->next = newNode(7);

	printf("Given linked list\n");
	linkedListTraversal(head);
	cout<< isPalindrome(head)<<endl;
	cout<< isPalindromeUsingReverse(head)<<endl;
	
}
