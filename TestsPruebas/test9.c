#include <stdio.h>
#include <string.h>

typedef struct {
    unsigned int hora:6;
    unsigned int minuto:6; 
    unsigned int segundo:6;
    unsigned int centecima:6;
}hora;

void devolverHora( hora );


int main(){
    hora Hora;
    
    Hora.hora=12;
    Hora.minuto=55;
    Hora.segundo=43;
    Hora.centecima=7;

    devolverHora(Hora);
    return 0;
    
}

void devolverHora ( hora Horario){
   printf("%d:%d:%d:%d",Horario.hora,Horario.minuto,Horario.segundo,Horario.centecima);
}