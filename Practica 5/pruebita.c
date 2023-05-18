#include <stdio.h>

int main(){

    FILE * miArch;
    miArch = fopen("salida.txt","w");
    if (miArch!= NULL){
    fprintf(stdout, "Ingresando valor");
    }
    fprintf(miArch, "valor ingresado2.");

    fclose(miArch);



    return 0;
}