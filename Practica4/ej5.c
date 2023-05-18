#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define DIEZ 10


char * alocacion (int );

void inicializacion (char * , int);

void MAY_MIN (char *,int);

int main(){
 int n=100;

 char * ptr = NULL;
 ptr=alocacion(n);
 inicializacion(ptr,n);
 MAY_MIN(ptr,n);
 free(ptr);
 return 0;
}

char * alocacion (int n) {
 char * p = (char *) malloc(n*sizeof(char));
 return p;
}

void inicializacion (char * ptr, int N){
    char string [DIEZ];
    int i;
    int length;
    for (i=0;i<DIEZ;i++){
        printf("Ingrese palabra: ");
        scanf("%s",string);
        strcat(ptr,string);
        length=strlen(string);
        ptr[length]='\0';
    }
}

void MAY_MIN (char * ptr, int N){
    int mayus=0;
    int min=0;
    int i;
    for (i=0;i<N;i++){
        if (ptr[i]>='a' && ptr[i]<='z'){
            min++;
        }
        else if (ptr[i]>='A' && ptr[i]<='Z'){
            mayus++;
        }
        else if (ptr[i]=='\0'){
            printf("Cantidad de mayusculas:%d  y de minusculas: %d\n",mayus,min);
            min=0;
            mayus=0;
        }
    }
}