#include <stdio.h>
#include <time.h>


float getPromedio (float [], int);
float getMaximo (float [], int);
float getMinimo (float [], int);

int ej2() { /* cambiar a main cuando quiero ejecutar */
    float numeros[]={10.5,45.3,1.5};

    printf("%f\n",getMaximo(numeros,3));
    printf("%f\n",getMinimo(numeros,3));
    printf("%f",getPromedio(numeros,3));


    return 0;
}

float getPromedio(float v[], int length){
    int suma=0,i;

    for(i=0;i<length;i++){
        suma+=v[i];
    }
    suma = (float) (suma/length);
    return suma;
}

float getMaximo (float v[], int lenght){
    int i;
    float max=-1;
    for (i=0;i<lenght;i++){
        if (v[i]> max){
            max=v[i];

        }

    }
    return max;
}

float getMinimo (float v[], int lenght){
    int i;
    float min=9999;
    for (i=0;i<lenght;i++){
        if (v[i]<min)
            min=v[i];
    }
    return min;
}