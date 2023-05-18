// en esta version la matriz sera tratada bidimensionalmente
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializarMatriz(int**, int, int);
int** reservar(int, int);
void multiplos3(int**, int, int);
void imprimirMatrizPorColumnas(int**, int, int);
void imprimirMatrizPorFilas(int**, int, int);
void liberarMatriz (int ** , int );


int main(){
    int *matriz, c, f;

    printf("Ingrese cantidad de filas: ");
    scanf("%d", &f);
    printf("Ingrese cantidad de columnas: ");
    scanf("%d", &c);
    matriz=reservar(c, f);

    inicializarMatriz(matriz, f, c);


    multiplos3( matriz, f, c);
    printf("\nimpresion por columnas: \n");
    imprimirMatrizPorColumnas(matriz, f, c);
    printf("\nimpresion por filas: \n");
    imprimirMatrizPorFilas(matriz, f, c);
    liberarMatriz(matriz,f);
    return 0;
}

void imprimirMatrizPorColumnas(int ** matriz, int f, int c){
    for(int j=0; j<c; j++){
        for(int i=0; i<f; i++){
            printf("%d \n", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatrizPorFilas(int ** matriz, int f, int c){
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            printf("%d \t", matriz[i][j]);
        }
    }
}


void multiplos3(int** matriz, int f, int c){
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            if(matriz[i][j] % 3 ==0)
                printf("%d \t", matriz[i][j]);
           ;
        }
    }
}

void inicializarMatriz(int** matriz, int f, int c){
    int aux;
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            printf("fila %d  columna %d: ", i,j);
            scanf("%d", &(matriz[i][j]));
        }
    }
}

int** reservar(int c, int f){
    int **matriz;
    matriz=(int**)malloc(f*sizeof(int*));//no se guarda en celdas consecutivas, por lo que reservaremos de diferente
    for (int i=0;i<f;i++){
        matriz[i]=(int*)malloc (c*sizeof(int));
    }

    return matriz;
}

void liberarMatriz (int ** matriz, int FILA){
    int i;
    for (i=0;i<FILA;i++){
        free(matriz[i]);
    }
    free (matriz);



}