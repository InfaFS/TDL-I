#include <stdio.h>

typedef enum {
    Lunes,
    Martes,
    Miercoles,
    Jueves,
    Viernes,
    Sabado,
    Domingo


} dias_semana;

void imprimir_diaV1 (dias_semana actual){
    switch (actual)
    {
    case Lunes:
        printf("El dia de hoy es lunes");
        break;
    case Martes:
        printf("El dia de hoy es martes");
        break;
    
    case Miercoles:
        printf("El dia de hoy es miercoles");
        break;
    
    case Jueves:
        printf("El dia de hoy es jueves");
        break;
    
    case Viernes:
        printf("El dia de hoy es viernes");
        break;
    
    case Sabado:
        printf("El dia de hoy es sabado");
        break;
    
    case Domingo:
        printf("El dia de hoy es domingo");
        break;
    
    
    default:
       printf( "El dia no es valido" );
        break;
    }


}


void imprimir_diaV2 (dias_semana actual){
    switch (actual)
    {
    case 0:
        printf("El dia de hoy es lunes");
        break;
    case 1:
        printf("El dia de hoy es martes");
        break;
    
    case 2:
        printf("El dia de hoy es miercoles");
        break;
    
    case 3:
        printf("El dia de hoy es jueves");
        break;
    
    case 4:
        printf("El dia de hoy es viernes");
        break;
    
    case 5:
        printf("El dia de hoy es sabado");
        break;
    
    case 6:
        printf("El dia de hoy es domingo");
        break;
    
    
    default:
       printf( "El dia no es valido" );
        break;
    }


}

int main (){

    dias_semana actual;
    actual= 4; //puedo acceder a los campos poniendo los numeros del orden en que esta el enum
    imprimir_diaV1(actual);
    actual= Lunes;
    imprimir_diaV2(actual);
    




    return 0;

}