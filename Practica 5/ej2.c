#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * file;
   file = fopen("ej2.txt","r");
   char c;
    int mayus=0; //guardo 3 contadores
    int minus=0;
    int digitos=0;
    if (file==NULL){ //si el archivo devolvio null (osea error), devuelvo 1

        printf("\nError al cargar el archivo\n");
        return 1;
    }

    else {
        c= fgetc(file);//sino le cargo a una variable caracter el valor del caracter apuntado en el txt
        while (!feof(file)){ //mientras no haya terminado de recorrer el archivo
            if ((c>='a')&&(c<='z')){ //chequeo si es uno de estos casos y sumo al contador
                minus++;
            }
            else if ((c>='A')&&(c<='Z')){
                mayus++;
            }
            else if ((c>='0')&&(c<='9')){
                digitos++;
            }
            c=fgetc(file);
        }



    }



    fclose(file); //CIERRO EL ARCHVO!!

    printf("DIGITOS: %d \t MAYUSCULAS: %d \t MINUSCULAS: %d \t",digitos,mayus,minus);
    return 0;
}