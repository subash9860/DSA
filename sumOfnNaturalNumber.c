#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}

int Isum(int n)
{
    int s = 0;
    int i;
    for (i = 1; i <= n; i++)
        s += i;
    return s;
}

int main()
{
    int r,n;
    scanf("%d",&n);
    printf("Frorm Recursion: Sum of %d th natural number is %d\n",n,sum(n));
    printf("From loop: Sum of %d th natural number is %d",n,Isum(n));
}