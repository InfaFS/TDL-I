#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anio;


}Fecha;

typedef union{
    Fecha fecha;
    long long int numero;

}FechaUnion;

int compararFechas (Fecha fecha1, Fecha fecha2){
    FechaUnion union1,union2;
    union1.fecha=fecha1;
    union2.fecha=fecha2;


    if (union1.numero==union2.numero){
        return 0;
    }

    else{
        return 1;
    }

}

int main(){

    Fecha fecha1 ={6,4,2023};
    Fecha fecha2 ={7,4,2023};
    Fecha fecha3 ={6,4,2023};

    int valor=compararFechas(fecha1,fecha3);
    if (valor==0){
        printf("Las fechas son las mismas");
    
    }
    else {
        printf("Las fechas son diferentes");
        
    }
    return 0;
}