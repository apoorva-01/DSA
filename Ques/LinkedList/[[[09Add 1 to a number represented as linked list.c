#include<stdio.h>

struct Node
{
	int data;
	struct Node * next;
};

struct Node *newNode(int data)
{
	struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

/* Function to reverse the linked list */
struct Node *reverse(struct Node *head)
{
	struct Node * prev = NULL;
	struct Node * current = head;
	struct Node * next;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}

/* Adds one to a linked lists and return the head
node of resultant list */
struct Node *addOneUtil(struct Node *head)
{
	// res is head node of the resultant list
	struct Node * res = head;
	struct Node *temp, *prev = NULL;

	int carry = 1, sum;

	while (head != NULL) //while both lists exist
	{
		// Calculate value of next digit in resultant list.
		// The next digit is sum of following things
		// (i) Carry
		// (ii) Next digit of head list (if there is a
		//	 next digit)
		sum = carry + head->data;

		// update carry for next calculation
		carry = (sum >= 10)? 1 : 0;

		// update sum if it is greater than 10
		sum = sum % 10;

		// Create a new node with sum as data
		head->data = sum;

		// Move head and second pointers to next nodes
		temp = head;
		head = head->next;
	}

	// if some carry is still there, add a new node to
	// result list.
	if (carry > 0)
		temp->next = newNode(carry);

	// return head of the resultant list
	return res;
}

// This function mainly uses addOneUtil().
struct Node * addOne(struct Node *head)
{
	// Reverse linked list
	head = reverse(head);

	// Add one from left to right of reversed
	// list
	head = addOneUtil(head);

	// Reverse the modified list
	return reverse(head);
}

// A utility function to print a linked list
void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d", node->data);
		node = node->next;
	}
	printf("\n");
}

/* Driver program to test above function */
int main(void)
{
	struct Node *head = newNode(1);
	head->next = newNode(9);
	head->next->next = newNode(9);
	head->next->next->next = newNode(9);

	printf("List is ");
	printList(head);

	head = addOne(head);

	printf("\nResultant list is ");
	printList(head);

	return 0;
}
