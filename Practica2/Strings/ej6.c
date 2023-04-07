#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int main()
{
    char palabra[MAX_LEN];
    int freq[26] = {0}; // Inicializamos todas las frecuencias en cero
    int len, i;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    len = strlen(palabra);

    // Contamos la frecuencia de cada letra
    for (i = 0; i < len; i++)
    {
        freq[palabra[i] - 'a']++;
    }

    // Mostramos los resultados
    printf("Frecuencia de cada letra en la palabra:\n");
    for (i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c: %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}
