#include <stdio.h>

typedef struct{
    unsigned int hora : 5;
    unsigned int minutos: 6;
    unsigned int segundos : 5;

}hora;

int main(){

    hora horario;
    int valor;

    printf("Ingrese una hora (rango 0-31): ");
    scanf("%d",&valor);
    horario.hora=valor;
    printf("Ingrese minutos (rango 0-63): ");
    scanf("%d",&valor);
    horario.minutos=valor;
    printf ("Ingrese segundos (rango 0-31): ");
    scanf("%d",&valor);
    horario.segundos=valor;
    printf("\n");

    printf("Son las %d:%d:%d",horario.hora,horario.minutos,horario.segundos);


    return 0;
}