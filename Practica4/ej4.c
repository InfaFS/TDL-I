#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float * alocacion (int );
void inicializacion (float* , int);
float prom(float *,int);

int main(){
 int n;
 scanf("%d",&n);

 float * ptr = NULL;
 ptr=alocacion(n);
 inicializacion(ptr,n);
 printf("El promedio es: %f",prom(ptr,n));
 free(ptr);
 return 0;
}

float * alocacion (int n) {
 float * p = (float *) malloc(n*sizeof(float));
 return p;
}

void inicializacion (float * ptr, int N){
    srand(time(NULL));
    int valor;
    int i;
    for (i=0;i<N;i++){
        valor=rand() % 11;
        ptr[i]=valor;
    }
}

float prom (float * ptr, int N){
    float prom=0;
    int i;
    for (i=0;i<N;i++){
        printf("VALOR EN ptr[%d] es %f\n",i,ptr[i]);
        prom+=ptr[i];
    }
    prom/=N;
    return prom;
}