#include <string.h>

#include <stdio.h>

void invertir (char *);
int main(){

    char linea[50]="hola";
    
    invertir(linea);



    return 0;

}

void invertir (char *string){
    int i;
    int N=strlen(string)-1;
    char aux;

    for (i=0;i<=N/2;i++){
        aux = string[i];
        string[i]=string[N-i];
        string[N-i]=aux;
    }
}