#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **realocMem(char **dic, int size, char *string, int );
void liberarMem(char **dic, int size);

int main() {
    FILE *f;
    f = fopen("diccionario.txt", "r");
    if (f == NULL) {
        printf("Error al abrir el archivo");
        return 1;
    }

    char **dic;
    char stringAux[100];
    int i = 0;
    int n = 1;
    fgets(stringAux, 100, f);
    while (!feof(f)) {
        stringAux[strcspn(stringAux, "\n")] = '\0'; 
        dic = realocMem(dic, n, stringAux, i);
        n++;
        i++;
        fgets(stringAux, 100, f);
    }
    //lo tnego que hacer una vez mas porque en la ultima palabra tambien me detecta final de archivo y no hace la operacion
    stringAux[strcspn(stringAux, "\n")] = '\0'; 
    dic = realocMem(dic, n, stringAux, i);
    fclose(f);
   scanf("%s",stringAux);
   int k=0;
    for (i = 0; i < n; i++) {
        if (strcmp(dic[i],stringAux)==0){
            k++;
            break;
        }
    }

    if (k){
         printf("La cadena se encuentra!");
     
    }
    else {
          printf("No esta la cadena");
    }


    liberarMem(dic, n);
    return 0;
}

char **realocMem(char **dic, int size, char * string , int  i) {
    char **aux;
    if (dic==NULL){
        aux= (char **) malloc (sizeof(char *));
        aux[0]= malloc (100 * sizeof(char));
        strcpy(aux[0],string);
        return aux;
    }
    size++;
    aux = realloc(dic, size * sizeof(char *));
    aux[i] = malloc(100 * sizeof(char));
    strcpy(aux[i],string);
    return aux;
}

void liberarMem(char **dic, int size) {
    for (int i = 0; i < size; i++) {
        free(dic[i]);
    }
    free(dic);
}
