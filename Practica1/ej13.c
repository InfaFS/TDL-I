#include <stdio.h>
#include <stdlib.h>

int funcion(int);

int main()
{
    int n;
    int i = 1;
    while (i <= 5)
    {
        printf("\n ingrese un numero entero \n");
        scanf("%d", &n);
        if (funcion(n) == 1)
        {
            printf("es primo");
            i++;
        }
        else
        {
            printf("no es primo");
        }
    }
    return 0;
}

int funcion(int n)
{
    int divisores, c;
    c = 1;
    divisores = 2;
    while ((divisores < n) && (c != 0))
    {
        if ((n % divisores) == 0)
            c = 0;
        divisores++;
    }
    return c;
}
