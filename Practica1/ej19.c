#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* ver como podria hacerlo mas eficiente o si esta bien */

int puntaje();

int main()
{
    auto int puntos;
    auto char corte, cali;
    printf("-----------------Sistema de operaciones elementales----------------\n");
    printf("Ingrese la primer letra de su nombre,'@' para finalizar:  ");
    scanf("%c", &corte);

    while (corte != '@')
    {
        puntos = puntaje();

        switch (puntos)
        {
        case (1):
            printf("NOTA:D");
            break;
        case (2):
            printf("NOTA:C");
            break;
        case (3):
            printf("NOTA:B");
            break;
        case (4):
            printf("NOTA:A");
            break;
        default:
            printf("NOTA:E");
            break;
        }

        printf("\nIngrese la primer letra de su nombre,'@' para finalizar:  "); /* ver por que aca tengo que poner los \n */
        scanf("\n%c", &corte);
    }

    return 0;
}

int puntaje()
{
    auto int i, a, b, input, p = 0;
    printf("Por favor resuelva las siguientes operaciones matematicas de suma:\n");
    for (i = 1; i <= 4; i++)
    {
        srand(time(NULL));
        a = rand() % 101;
        b = rand() % 101;
        printf("%d + %d = ", a, b);
        scanf("%d", &input);
        if (input == (a + b))
        {
            p++;
            printf("Respuesta correcta! + 1 punto.\n");
        }
        else if (input != (a + b))
            printf("Respuesta incorrecta...\n");
    }
    return p;
}
