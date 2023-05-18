#include <stdio.h>
#include <stdlib.h>
#define N 10
int*** crearTensor(int t){
 int i,j;
 int*** a;
 a = (int***) calloc(t,sizeof(int**));
 for (i=0; i<t; i++){
    a[i] = (int**) calloc(t, sizeof(int*));//todo lo de abajo,10 veces para cada posicion de i
        for (j=0; j<t; j++){// asi para 10 posiciones de j
            a[i][j] = (int*) calloc(t, sizeof(int)); //en la posicion 0,0 habra un puntero a un vector de integer con 10 espacios
        }
 }
 return a;
}
int main()
{
 int*** e;
 e = crearTensor(N);
 return 0;
}