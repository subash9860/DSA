#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int info;
    struct stack *next;
} *top = NULL;
typedef struct stack st;

void push();
int pop();
void display();

void main()
{
    char ch;
    int choice, item;
    do
    {
        printf("\n1: Push");
        printf("\n2: Pop");
        printf("\n3: display");
        printf("\n4: exit");
        printf("\n Enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            printf("The delete element is %d", pop());
        case 3:
            display();
        case 4:
            exit(0);
        }
    } while (choice != 4);
}

void push()
{
    st *p;
    p = (st *)malloc(sizeof(st));
    printf("\n Enter the number");
    scanf("%d", &p->info);
    p->next = top;
    top = p;
}

int pop()
{
    st *p;
    if (top == NULL)
        printf("Stack is empty");
    else
    {
        top = top->next;
        return (p->info);
        free(p);
    }
}

void display()
{
    st *p = top;
    while (p != NULL)
    {
        printf("\n no = %d", p->info);
        p = p->next;
    }
    printf("\n no = %d", p->info);
}