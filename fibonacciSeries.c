#include <stdio.h>
// using recursion
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 2) + fib(n - 1);
}

// using loop
int fib1(int n)
{
    int t0 = 0, t1 = 1, i, s;
    if (n <= 1)
        return n;
    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// using memoixation ...Recommanded (optimized)
int F[10];
int mfib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = mfib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = mfib(n - 1);

        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    printf("%d\n", fib(6));
    printf("%d\n", fib1(6));

    int i;
    for (i = 0; i < 10; i++)
        F[i] = -1;
    printf("%d\n", mfib(6));
}