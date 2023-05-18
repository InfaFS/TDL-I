#include <stdio.h>
#include <string.h>

typedef enum {BASTO,COPA,ORO,ESPADA}PALOS;

void mostrarCarta(int,PALOS);

int main(){
    PALOS palo;
    int numero;
    palo=BASTO;
    mostrarCarta(numero,palo);
    return 0;
}

void mostrarCarta(int numero, PALOS p){
    printf("Numero | %d",numero);
    switch (p)
    {
    case BASTO:
        printf("| BASTO ");
        break;
    case ORO:
        printf("| ORO ");
        break;
    case COPA:
        printf("| COPA");
        break;
     case ESPADA:
        printf("| ESPADA ");
        break;
    }
}