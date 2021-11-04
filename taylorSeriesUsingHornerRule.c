#include <stdio.h>
double e(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e(x, n - 1);
}

// us loop
double L_e(int x, int n)
{
    int s = 1;
    for (; n > 0; n--)
    {
        s = 1 + x * s / n;
    }
    return s;
}
int main()
{
    printf("Taylor using optimized recursion : %f\n", e(3, 10));
    printf("Taylor using optimized loop : %f\n", L_e(4, 10));
}