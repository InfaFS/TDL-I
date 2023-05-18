#include <stdio.h>
#include <stdlib.h>
#define LONG 300

int main(){
 FILE *f;
 char linea[LONG];
 // Abrir el archivo
 f = fopen("prueba.txt", "r");
 if (f == NULL){
    printf ("\nError al abrir archivo fuente\n");
    return 1;
 }
 // leer una linea del archivo EXTRA, ya que el feof hace referencia a si la ultima operacion que se hizo fue la final
fgets(linea,LONG,f);
 while (!feof(f)){
    // imprimir la linea en la pantalla
    puts(linea);
    // leer una linea del archivo
    fgets(linea,LONG,f);
 }
 fclose(f);
 return 0;
}