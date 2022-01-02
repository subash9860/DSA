#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

// optimized method

struct node *add_at_end_Opt(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

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

    // general method
    // struct node *current = NULL;
    // current = (struct node *)malloc(sizeof(struct node));
    // current->data = 51;
    // current->link = NULL;

    // head->link = current;

    // current = malloc(sizeof(struct node));
    // current->data = 52;
    // current->link = NULL;

    // head->link->link = current;

    // optimized method
    struct node *ptr = head;
    ptr = add_at_end_Opt(ptr, 97);
    ptr = add_at_end_Opt(ptr, 96);
    ptr = add_at_end_Opt(ptr, 95);

    ptr = head;

    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }

    // count_nodes_print(head);

    // add_at_end(head, 67);
    // count_nodes_print(head);

    return 0;
}