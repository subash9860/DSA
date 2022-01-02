#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

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

    printf("\n %d\n", head->data);
    printf("\n %d\n", head->link->data);
    printf("\n %d\n", head->link->link->data);

    return 0;
}