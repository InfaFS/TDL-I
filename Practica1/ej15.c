#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main()
{
    int n;
    printf("Ingrese un numero para hacerle factorial\n");
    scanf("%d", &n);
    printf("El factorial de %d es %d", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
