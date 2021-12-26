#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node NodeType;
NodeType *first, *last;

void display()
{
    NodeType *temp;
    temp = first;
    if (first == NULL)
    {
        printf("Empty linked list");
        exit(1);
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\t", temp->info);
            temp = temp->next;
        }
    }
}

void insert_atfirst(int item)
{
    NodeType *newNode;
    newNode = (NodeType *)malloc(sizeof(newNode));
    if (first == NULL)
    {
        newNode->next = NULL;
        first = newNode;
        last = newNode;
    }
    else
    {
        newNode->next = first;
        first = newNode;
    }
}

void main()
{
    int item;
    printf("Inserted item at first of linked list:\n");
    scanf("%d",&item);
    insert_atfirst(item);
    display();
}
