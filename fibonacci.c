#include<stdio.h>
int fibonacciNumber(int n)
{
    if (n<2)
    return n;
    else
    return fibonacciNumber(n-1)+fibonacciNumber(n-2);
}

int main()
{
    int n;
    printf("How many fibo:");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        printf("%d\t\n",fibonacciNumber(i));
    }
}
