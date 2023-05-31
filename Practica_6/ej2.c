#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
    if (argc==5){
        int suma=0;
        for (int i=1;i<argc;i++){
            suma+=atoi(argv[i]);

        }
        float prom = (float)suma/(argc-1);
        printf("El promedio es %f",prom);
    }
    
    else 
        printf("La cantidad de argumentos no es valida.");

    return 0;
}