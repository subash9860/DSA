#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}
int Ifact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int r;
    r = fact(5);
    printf("\n By usign recursion:%d\n", r);
    printf("\n By using iteration :%d\n",Ifact(6));
    return 0;
}