#include<stdio.h>
void funB(int n);
void funA(int n)
{
    if(n>0)
    {
        printf("\n%d\t",n);
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        printf("\n%d\t",n);
        funA(n/2);
    }
}

int main()
{
    funA(20);
}