#include<stdio.h>
void fun(int n)
{
    if(n>0)
    {
        printf("tail: %d\t",n);
        fun(n-1);
        printf("\n head: %d",n);
    }
}
int main()
{
    int x=3;
    fun(x);
    return 0;
}