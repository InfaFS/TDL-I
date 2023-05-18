#include <stdio.h>
#include <stdlib.h>


double * alocarMemoria(int );
void inicializar (double *,int);
double prom_1 (double * , int );
double prom_2(double * , int );
void liberar (double *);
int main(){

    double * Ptr=NULL;
    int n;
    printf("Ingrese un numero: ");
    scanf("%d",&n);
    Ptr=alocarMemoria(n);
    printf("Alocando memoria...");
    inicializar(Ptr,n);

    printf("El promedio de manera 1 es %lf y de manera 2 es %lf ",prom_1(Ptr,n),prom_2 (Ptr,n));
    liberar(Ptr);
  

    return 0;
}

double * alocarMemoria(int n){
    double * p = (double *) malloc (n*sizeof(double));
    return p;
}

void inicializar (double * Ptr, int n){

    int i;
    for (i=0;i<n;i++){
        printf("\nIngrese numero para v[%d]: ",i);
        scanf("%lf",&Ptr[i]);

    }



}

double prom_1(double * Ptr, int n){
    int i;
    double suma=0;
    for (i=0;i<n;i++){
        suma+=Ptr[i];

    }
    suma= suma/n;
    return suma;
}

double prom_2(double * Ptr, int n){
    int i;
    double suma=0;
    for (i=0;i<n;i++){
        suma+= *(Ptr+i);

    }
    suma= suma/n;
    return suma;
}

void liberar(double * Ptr){
    free(Ptr);
}