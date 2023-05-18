#include <stdio.h>
#include <string.h>

int main(){

    FILE *  arch;

    char string[30];

    arch=fopen("salida.txt","w");
    scanf ("%s",string);
    while (strcmp(string,"FIN")){
        fprintf(arch,"%s\n",string);
        scanf ("%s",string);
    }

    fclose(arch);



    return 0;
}