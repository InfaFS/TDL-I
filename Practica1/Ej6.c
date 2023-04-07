#include <stdio.h>
#include <stdlib.h>

int main()
{

    float km;
    printf("Ingrese valor en km:...\n");
    scanf("%f", &km); /* muy importante poner el % y el & respectivamente */
    float milla = (km / 1.61);
    printf("Su valor en millas es de %f", milla);
    return 0;
}
