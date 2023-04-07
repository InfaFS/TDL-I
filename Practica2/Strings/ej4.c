#include <stdio.h>
#include <stdlib.h>
#define N 5

int calcularLong(char *);
int main()
{
    char v[N] = "Hola";
    printf("La longitud de %s es de:  %d", v, calcularLong(v));

    return 0;
}

int calcularLong(char *str)
{
    char *ptr = str;
    int c;
    while (*ptr != '\0')
    {
        c++;
        ptr++;
    }
    return c;
}
