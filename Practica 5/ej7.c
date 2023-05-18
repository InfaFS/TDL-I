#include <stdio.h>
#include <string.h>

int main(){
    char string [100];
    char c;
    FILE * f;
    f=fopen("archivo1.txt","r");
    FILE * out;
    out = fopen("archivo1_copia.txt","w");

    if ((f==NULL) || (out==NULL)){
        printf("Uno de los archivos que se intento abrir dio error.");
        return 1;
    }
  //con carga de caracteres
    //c=getc(f);
   // while (!feof(f)){
        //putc(c,out);
      //  c=getc(f);
    //}
    //

   //fgets(string,100,f);  //en el fgets, toma hasta encontrar el caracter \n(bajada de linea), o hasta agotar el espacio de la string

    //while (!feof(f)){
    //fputs(string,out);
    //fgets(string,100,f);
   //}

   // fputs(string,out); //lo copiamos una vez mas porque al detectar el caracter de end of file no pone la ultima cadena(ver como deberia ser la correcta implementacion)
    
   

   //fread(string,sizeof(char),100,f); //el fread al parecer me copia lo maximo del archivo o lo que le indico

    //fwrite(string,sizeof(char),strlen(string),out);


    fclose(f);
    fclose(out);

    return 0;
}