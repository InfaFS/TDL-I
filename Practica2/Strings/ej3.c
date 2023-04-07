#include <stdio.h>
#include <stdlib.h>
#define N1 15
#define N2 12

char *strcpy_(char *, char *);

int main()
{
    char cadena1[N1] = "Adios";
    char cadena2[N2] = "Buenas ALO";

    printf("Cadena original 1: %s\n", cadena1);
    printf("Cadena original 2: %s\n", cadena2);
    strcpy_(cadena1, cadena2);
    printf("Cadena 1 modificada: %s\n", cadena1);
    printf("Cadena 2 sin cambios: %s\n", cadena2);

    return 0;
}

char *strcpy_(char *str1, char *str2)
{
    char *ptrAux = str1; // Usamos ptrAux para recorrer la cadena destino

    // Mientras no lleguemos al final de la cadena origen
    while (*str2 != '\0')
    {
        *ptrAux = *str2; // Copiamos el car�cter de la cadena origen a la cadena destino
        ptrAux++;        // Movemos el puntero de la cadena destino al siguiente car�cter
        str2++;          // Movemos el puntero de la cadena origen al siguiente car�cter
    }

    *ptrAux = '\0'; // Terminamos la cadena destino con el car�cter nulo

    return str1;
}
