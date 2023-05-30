#include <iostream>
using namespace std;

// Que---- https://leetcode.com/problems/swap-nodes-in-pairs/description/
// Ans---- https://leetcode.com/problems/swap-nodes-in-pairs/solutions/1774708/c-visual-image-how-links-change-explained-every-step-commented-code/

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

Node* middleNode(Node* head) {
        Node * s=head;
        Node * f=head;
        while(s && f && f->next){
            s=s->next;
            f=f->next->next;
        }
        return s;
    }

// Finding Length & mid=len/2 ------ Accepted
Node*  swapNode(Node* head) {
    
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
	cout<< middleNode(head)->data<<endl;
	cout<< swapNode(head)->data<<endl;
	
}
