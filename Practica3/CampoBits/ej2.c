#include <stdio.h>
#include <string.h>

typedef struct{
    unsigned int red : 5;
    unsigned int green : 6;
    unsigned int blue : 5;

}RGB16;

typedef struct{
    unsigned int red : 8;
    unsigned int green : 8;
    unsigned int blue : 8;

}RGB24;

typedef union {
    RGB24 rgb24;
    RGB16 rgb16;

}tipoRGB;

void convertir_RGBS16_24(tipoRGB *RGB){
    RGB->rgb24.blue=RGB->rgb16.blue;
    RGB->rgb24.red=RGB->rgb16.red;
    RGB->rgb24.green=RGB->rgb16.green;
}

void convertir_RGBS24_16(tipoRGB *RGB){
    if (RGB->rgb24.blue>31){
        printf("El valor de blue de RGB24 era mayor al rango permitido de blue RGB16, su valor fue capeado a 31\n ");
        RGB->rgb16.blue=31;

    }
    else {
        RGB->rgb16.blue=RGB->rgb24.blue;
    }

    if (RGB->rgb24.red>31){
        printf("El valor de red de RGB24 era mayor al rango permitido de red RGB16, su valor fue capeado a 31\n ");
        RGB->rgb16.red=31;

    }
    else {
        RGB->rgb16.red=RGB->rgb24.red;
    }

    if (RGB->rgb24.green>63){
        printf("El valor de green de RGB24 era mayor al rango permitido de green RGB16, su valor fue capeado a 63\n ");
        RGB->rgb16.green=63;

    }
    else {
        RGB->rgb16.green=RGB->rgb24.green;
    }
}


int main (){
    int valor;
    tipoRGB RGB;
    char entry [50];
    printf("Ingrese RGB16 para cargar los datos de un rgb de 16 bits || Ingrese RGB24 para cargar los datos de un rgb de 24 bits: \n");
    scanf("%s",entry);
    if (strcmp(entry,"RGB16")==0){
        printf("Ingrese valor de blue(RANGO: 0-31):  " );
        scanf("%d",&valor);
        RGB.rgb16.blue=valor;
        printf("Ingrese valor de red (RANGO 0-31):  " );
        scanf("%d",&valor);
        RGB.rgb16.red=valor;
        printf("Ingrese valor de green (0-63):  " );
        scanf("%d",&valor);
        RGB.rgb16.green=valor;

        printf("Los valores del RGB16 son : RED= %d BLUE= %d GREEN= %d\n",RGB.rgb16.red,RGB.rgb16.blue,RGB.rgb16.green);
        printf("Comienza transformacion de los datos:\n ");
        convertir_RGBS16_24(&RGB);
        printf("Los valores del RGB16 a RGB24 son : RED= %d BLUE= %d GREEN= %d",RGB.rgb24.red,RGB.rgb24.blue,RGB.rgb24.green);

    }
    else if(strcmp(entry,"RGB24")==0){
        printf("Ingrese valor de blue(RANGO: 0-255):  " );
        scanf("%d",&valor);
        RGB.rgb24.blue=valor;
        printf("Ingrese valor de red (RANGO 0-255):  " );
        scanf("%d",&valor);
        RGB.rgb24.red=valor;
        printf("Ingrese valor de green (0-255):  " );
        scanf("%d",&valor);
        RGB.rgb24.green=valor;

        printf("Los valores del RGB24 son : RED= %d BLUE= %d GREEN= %d\n",RGB.rgb24.red,RGB.rgb24.blue,RGB.rgb24.green);

        printf("Comienza transformacion de los datos:\n ");
        convertir_RGBS24_16(&RGB);
        printf("Los valores del RGB24 a RGB16 son : RED= %d BLUE= %d GREEN= %d",RGB.rgb16.red,RGB.rgb16.blue,RGB.rgb16.green);

    }
    else {
        printf("Comando inexistente");
    }
    
    return 0;
}