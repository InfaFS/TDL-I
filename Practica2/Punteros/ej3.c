#include <stdio.h>
int main()

{
    int x[5] = {1, 2, 3, 4, 5};
    int *p = x;
    printf("La direccion memoria de p es %p \n", &p);
    printf("La direccion la que apunta p es %p \n", p);
    printf("El valor al que apunta p es %d \n", *p);
    p++;
    printf("La direccion memoria de p ahora es %p \n", &p);
    printf("La direccion la que apunta p ahora es %p \n", p);
    printf("El valor al que apunta p ahora es %d \n", *p);
    return 0;
}
// refiere a que la variable p, la cual es un puntero, tiene almacenada la misma direccion de memoria que al primer objeto que apunta el vector X
