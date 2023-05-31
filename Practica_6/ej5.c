#include <stdio.h>
#include <stdlib.h>
#define size 25

void imprimir(int * v, int );


int main(){
 int v[size];
 imprimir(v, size);
 return 0;
}


void imprimir(int * v, int value){
 int i;
 for (i=0; i<value; i++){
 printf("v[%d]= %d", i, v[i]);
 }
}