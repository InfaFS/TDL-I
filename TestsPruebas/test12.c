#include <stdio.h>

typedef struct{
    unsigned int hora:6;
     unsigned int minuto:6;

    unsigned int segundo:6;

    unsigned int centecimo:6;
}Hora;

Hora devolver_hora (unsigned int,unsigned int,unsigned int,unsigned int);
int main(){

    Hora hor;

    unsigned int hs=10;
    unsigned int min=45;
    unsigned int seg=23;
    unsigned int cent=11;
    hor=devolver_hora(hs,min,seg,cent);
    printf("Son las %u:%u:%u:%u",hor.hora,hor.minuto,hor.segundo,hor.centecimo);


}

Hora devolver_hora (unsigned int hs,unsigned int min,unsigned int seg,unsigned int cent){
    Hora horario;
    horario.centecimo=cent;
    horario.hora=hs;
    horario.minuto=min;
    horario.segundo=seg;

    return horario;



}