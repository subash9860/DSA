#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void count_nodes_print(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty");

    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        // printing each nodes data
        printf("%d\t", ptr->data);
        // for counting nodes
        count++;
        ptr = ptr->link;
    }
    printf("\ntotal nodes are: %d\n", count);
}

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 50;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 51;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 52;
    current->link = NULL;

    head->link->link = current;

    count_nodes_print(head);

    return 0;
}