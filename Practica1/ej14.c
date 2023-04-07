#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main()
{
    int n, r;
    scanf("%d", &n);
    r = factorial(n);
    printf("%d", r);
    return 0;
}
int factorial(int n)
{
    int r = n;
    int m = n - 1;
    while (m >= 1)
    {
        r = r * m;
        m--;
    }
    return r;
}
