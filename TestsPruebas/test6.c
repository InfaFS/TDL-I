#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    float radio;
  
    
}circulo;

typedef struct{
    float lado;


}cuadrado;

typedef struct{
    float altura;
    float base;
    

}triangulo;

typedef struct{
    char color[10];
    int tipo;
    union {
        circulo C;
        cuadrado c;
        triangulo T;

    }queSoy;

}figura;

void imprimirFigura(figura );



enum {TRIANGULO,CIRCULO,CUADRADO};
int main(){

    figura fig;
    strcpy(fig.color,"Blanco");
    fig.tipo=TRIANGULO;
    fig.queSoy.T.base=2.0;
    fig.queSoy.T.altura=3.2;
    imprimirFigura(fig);

    return 0;
}


void imprimirFigura(figura fig){
    switch (fig.tipo)
    {
    case CIRCULO:
        printf("CIRCULO | AREA %f | COLOR %s",pow(fig.queSoy.C.radio,2)*M_PI,fig.color);
        break;
    case CUADRADO:
        printf("CUADRADO | AREA %f | COLOR %s ",fig.queSoy.c.lado*2, fig.color);
        break;
    case TRIANGULO:
        printf("TRAINGULO | AREA %f | COLOR %s",(fig.queSoy.T.base*fig.queSoy.T.altura)/2,fig.color);
    default:
        break;
    }
}