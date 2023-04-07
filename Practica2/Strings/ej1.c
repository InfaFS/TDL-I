#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    char vector[N];
    int contador;

    scanf("%s", vector);

    while (strcmp(vector, "ZZZ") != 0)
    {
        scanf("%s", vector);
        if (strlen(vector) == 5)
        {
            contador++;
        }
    }
    printf("La cantidad de palabras con 5 letras es de %d", contador);
    return 0;
}
