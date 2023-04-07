#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    char op;

    printf("--------------Consola de operadores aritemeticos------------\n");
    printf("Ingrese su primer valor: ");
    scanf("%d", &num1);
    printf("\nIngrese su segundo valor: ");
    scanf("%d", &num2);
    printf("Ingrese un caracter correspondiente a una de las cuatro operaciones: ");
    printf("\n-----s=suma  ");
    printf("\n-----r=resta  ");
    printf("\n-----m=multiplicacion  ");
    printf("\n-----d=division  ");
    printf("\n---->:");
    scanf("\n%c", &op);

    switch (op)
    {
    case 's':
        printf("El resultado de sumar %d + %d es de: %d", num1, num2, num1 + num2);
        break;
    case 'r':
        printf("El resultado de restar %d - %d es de: %d", num1, num2, num1 - num2);
        break;
    case 'm':
        printf("El resultado de multiplicar %d por %d es de: %d", num1, num2, num1 * num2);
        break;
    case 'd':
        printf("El resultado de dividir %d y %d es de: %d", num1, num2, num1 / num2);
        break;
    default:
        printf("Error, operacion inexistente");
    }

    return 0;
}
