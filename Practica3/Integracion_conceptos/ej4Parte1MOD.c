#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 50
#define P 4
#define C 12

typedef struct
{
    unsigned int numero : 4;
    unsigned int palo : 3;
} carta;

void inicializar(carta v[])
{
    int i;
    int j;
    int k=0;
    for (i = 0; i < P; i++)
    {
        for (j = 0; j < C; j++)
        {
            v[k].numero = j + 1;
            v[k].palo = i + 1;
            k++;
        }
    }
    v[48].numero = 0;
    v[48].palo = 0;
    v[49].numero = 0;
    v[49].palo = 0;
}

void barajar(carta v[])
{
    carta aux;
    int random = 0;
    int i = 0;
    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        random =  rand() % 50;
        aux = v[random];
        v[random] = v[i];
        v[i] = aux;
    }
}

void sacarCarta(carta v[]){
    carta sacada;
    srand(time(NULL));
    int random = rand() % 50;
    printf("Sacando la carta de la posicion v[%d] ...\n",random);
    sacada = v[random];
    for (int i=random;i<49;i++){
         v[i]=v[i+1];
    }
    printf("Poniendo la carta de vuelta...\n");
    v[49]=sacada;
}

void mostrarMazo(carta v[])
{
    int i = 0;
    int palo = 0;
    for (i = 0; i < N; i++)
    {
        palo = v[i].palo;
        switch (palo)
        {
        case 0:
            printf("v[%d]-->COMODIN-->Numero %d\n", i, v[i].numero);
            break;
        case 1:
             printf("v[%d]-->BASTO-->Numero %d\n", i, v[i].numero);
            break;
        case 2:
             printf("v[%d]-->COPA-->Numero %d\n", i, v[i].numero);
            break;
        case 3:
             printf("v[%d]-->ESPADA-->Numero %d\n", i, v[i].numero);
            break;
        case 4:
            printf("v[%d]-->ORO-->Numero %d\n", i, v[i].numero);
            break;
        default:
            break;
        }
    }
}

void imprimirCarta (carta v[],int carta){
    switch (v[carta-1].palo)
    {
    case 0:
        printf("La carta %d es un COMODIN\n");
        break;
    case 1:
        printf("La carta %d es un %d de BASTO",carta,v[carta-1].numero);
        break;
    case 2:
        printf("La carta %d es un %d de COPA",carta,v[carta-1].numero);
        break;
    case 3:
        printf("La carta %d es un %d de ESPADA",carta,v[carta-1].numero);
    
        break;
    case 4:
         printf("La carta %d es un %d de ORO",carta,v[carta-1].numero);
        break;
    default:
        printf("Valor no valido");
        break;
    }


}



int main()
{
    carta vector_cartas[50];
    inicializar(vector_cartas);
    mostrarMazo(vector_cartas);
    barajar(vector_cartas);
    printf("//////////////////////////////////////////\n");
    mostrarMazo(vector_cartas);
    sacarCarta(vector_cartas);
    mostrarMazo(vector_cartas);

    int carta;
    printf("Ingrese la carta que quiere saber: ");
    scanf("%d",&carta);
    imprimirCarta(vector_cartas,carta);
 

    return 0;
}