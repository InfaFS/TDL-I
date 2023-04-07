#include <stdio.h>
#include <stdlib.h>

int damePar();

int main()
{
    int i, n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d\t", damePar());

    return 0;
}

int damePar()
{
    static int ret = -2;
    ret += 2;
    return ret;
}
