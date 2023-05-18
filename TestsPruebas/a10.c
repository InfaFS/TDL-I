#include <stdio.h>
#define N 3
struct mensaje{
    int codigo;
    char texto [145];
    char usuario [51];
    int retwitss;


};

typedef struct mensaje Tweet;

void cargarMensaje (Tweet *);

float prom_retwitss ( Tweet [], int );

int main(){
    
    Tweet twits[N];
    int i;
    for (i=0;i<N;i++){
        cargarMensaje(&twits[i]);

    }

    printf("El promedio de rt es de: %f",prom_retwitss(twits,N));
    
    return 0;
}

void cargarMensaje (Tweet *tw){
    scanf("%d",&tw->codigo);
    scanf("%s",tw->texto);
    scanf("%s",tw->usuario);
    scanf("%d",&tw->retwitss);

}

float prom_retwitss ( Tweet tws[], int indice){
    int i;
    int cant=0;

    for (i=0;i<indice;i++){
        cant+=tws[i].retwitss;
    }

   float prom = (float)cant/indice;
   return prom;

}