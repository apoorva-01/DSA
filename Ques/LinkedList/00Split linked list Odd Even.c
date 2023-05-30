#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *even = NULL;
struct Node *odd = NULL;

void display(struct Node *head)
{
    struct Node *ptr = head;

    printf("[head] =>");
    // start from the beginning
    while (ptr != NULL)
    {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }
    printf(" [null]\n");
}

void split_linked_list(struct Node *head)
{
    // Allocate memory for new Node;
    struct Node *link;
    struct Node *current;

    while (head != NULL)
    {
        struct Node *link = (struct Node *)malloc(sizeof(struct Node));

        link->data = head->data;
        link->next = NULL;

        if (head->data % 2 == 0)
        {
            if (even == NULL)
            {
                even = link;
                head = head->next;
                continue;
            }
            else
            {
                current = even;

                while (current->next != NULL)
                    current = current->next;

                // Insert link at the end of the head
                current->next = link;
            }
            head = head->next;
        }
        else
        {
            if (odd == NULL)
            {
                odd = link;
                head = head->next;
                continue;
            }
            else
            {
                current = odd;
                while (current->next != NULL)
                    current = current->next;

                // Insert link at the end of the head
                current->next = link;
            }
            head = head->next;
        }
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate dynamic memory for Nodes in the linked head in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second Nodes
    head->data = 1;
    head->next = second;

    // Link second and third Nodes
    second->data = 2;
    second->next = third;

    // Link third and fourth Nodes
    third->data = 3;
    third->next = fourth;

    // Terminate the head at the third Node
    fourth->data = 4;
    fourth->next = NULL;

    printf("Complete head: \n");
    display(head);

    split_linked_list(head);

    printf("\nOdd  : ");
    display(odd);

    printf("Even : ");
    display(even);

    return 0;
}