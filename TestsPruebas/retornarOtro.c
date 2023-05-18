#include <stdio.h>
enum palos {HOLA,COMO,ESTAS};

typedef struct{

    int numero;
    enum palos palo;

}carta;


int main(){

    palos p=HOLA;
    carta CARTITA;

    CARTITA.numero=3;
    CARTITA.palo=p;
    
    printf("%d",a);


    return 16;
}
