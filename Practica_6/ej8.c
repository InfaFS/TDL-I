#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000

int busqueda (int [],int,int);
int main(){
    srand(time(NULL));
   int vector[N];
   for (int i=0;i<N;i++){
    vector[i]=rand()%1001;
   }
  printf("%d",busqueda(vector,N,5));

 return 0;
}

int busqueda(int vector[], int n,int valor){
    int contador=0;
    for (int i=0;i<n;i++){
        contador++;
        if (vector[i]==valor){
        #ifdef mostrar
            printf("Se accedio al vector %d veces ",contador);
        #endif
            return (i+1);
        }
    }
    return -1;
}