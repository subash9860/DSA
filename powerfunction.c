#include <stdio.h>
int paw(int m, int n)
{
    if (n == 0)
        return 1;
    return paw(m, n - 1) * m;
}

int O_paw(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return paw(m * m, n / 2);
    else
        return m * paw(m * m, n / 2);
}

int main()
{
    printf("\n power is :%d", paw(2, 9));
    printf("\n Optimized power function: %d", O_paw(2, 8));
}