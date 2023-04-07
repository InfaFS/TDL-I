
#include <stdio.h>
int main()
{
    char a, b;

    printf("Ingrese el primer caracter:\n");
    scanf("%c", &a);
    printf("Se ley� el caracter: %c\n", a);
    printf("Ingrese el segundo caracter:\n");
    scanf("\n%c", &b); /* ver lo de \n bien en la practica auqneu entiendo en parte el porque */
    printf("Se ley� el caracter: %c\n", b);

    return 0;
}
