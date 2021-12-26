/*
Stack implementation in array
= static implementation

*/

#include <stdio.h>
#define max 5
int stack[max];
int top = -1;

void push()
{
    int item;
    if (top < 4)
    {
        printf("Enter the number:");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
    else
        printf("satck overflow");
}

int pop()
{
    int item;
    if (top == -1)
        printf("the stack is empty");

    else
    {
        item = stack[top];
        top--;
    }
    return (item);
}

void display()
{
    int i;
    if (top == -1)
        printf("stack underflow");
    else
    {
        for (i = 0; i >= 0; i--)
            printf("\n %d\t", stack[i]);
    }
}
int main()
{
    push();
    display();
    printf("\ndeleted element is =%d\n", pop());
}
