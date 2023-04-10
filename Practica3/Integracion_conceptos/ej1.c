#include <stdio.h>
#include <math.h>

typedef struct{
    unsigned int estado :1;
    float radio;
}circulo;

typedef struct{
    unsigned int estado :1;
    float lado;
}cuadrado;

typedef struct{
    unsigned int estado :1;
    float base;
    float altura
}rectangulo;

typedef struct{
    unsigned int estado :1;
    float radioH;
    float radioV;
}elipse;

typedef struct
{   
    unsigned int estado :1;
    float base;
    float lado2;
    float lado3;
    float altura;
}triangulo;







typedef union{
    triangulo Triangulo;
    circulo   Circulo;
    elipse  Elipse;
    rectangulo rectangulo;
    cuadrado cuadrado;
}figuras;


void sacarSup (figuras figura){
    float superficie=0;

    if (figura.Circulo.estado==1){
        superficie= M_PI*pow(figura.Circulo.radio,2);
        printf("Superficie del circulo %f",superficie);

    }

   else if(figura.cuadrado.estado==1){
        superficie= figura.cuadrado.lado* figura.cuadrado.lado;
        printf("Superficie del cuadrado %f", superficie);

    }
    else if(figura.rectangulo.estado==1){
        superficie=figura.rectangulo.base*figura.rectangulo.altura;
        printf("Superficie del rectangulo %f",superficie);
    }
    else if(figura.Triangulo.estado==1){
        superficie=(figura.Triangulo.base*figura.Triangulo.altura)/2;
        printf("Superficie del triangulo %f",superficie);

    }
   else  if (figura.Elipse.estado==1){
        superficie= M_PI*figura.Elipse.radioH*figura.Elipse.radioV;
        printf("Superficie de la elipse %f",superficie);
    }


}


int main(){
    figuras figura;
    char entry;
    printf("Ingrese figura: ");
    printf(" T(triangulo)  E(elipse)  C(circulo)  J(cuadrado)  R(rectangulo)\n");
    scanf("%c",&entry);
    
    switch (entry)
    {
    case 'T':
        printf("Ingrese base:  ");
        scanf("%f",&figura.Triangulo.base);
        printf("Ingrese lado 2: ");
        scanf("%f",&figura.Triangulo.lado2);
        printf("Ingrese lado 3: ");
        scanf("%f",&figura.Triangulo.lado3);
        printf("Ingrese altura: ");
        scanf("%f",&figura.Triangulo.altura);
        figura.Triangulo.estado=1;

    break;
    
    case 'E':
        printf("Ingrese radio Horizontal: ");
        scanf("%f",&figura.Elipse.radioH);
        printf("Ingrese radio Vertical: ");
        scanf("%f",&figura.Elipse.radioV);
        figura.Elipse.estado=1;
    break;
    
    case 'C':
        printf("Ingrese radio del circulo: ");
        scanf("%f",&figura.Circulo.radio);
        figura.Circulo.estado=1;
    break;
    
    case 'J':
        printf("Ingrese lado del cuadrado: ");
        scanf("%f",&figura.cuadrado.lado);
        figura.cuadrado.estado=1;
    break;

    case 'R':
       printf("Ingrese base del rectangulo: ");
       scanf("%f",&figura.rectangulo.base);
       printf("Ingrese altura del rectangulo: ");
       scanf("%f",&figura.rectangulo.altura);
       figura.rectangulo.estado=1;
        
    break;
    default:
        printf("Caracter no valido ");
        break;

    }

    sacarSup(figura);


    return 0;
}