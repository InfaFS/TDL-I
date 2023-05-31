#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){

    if (argc==4){
        int valor_1=0;
        int valor_2=0;

        valor_1=atoi(argv[1]);
        valor_2=atoi(argv[2]);
        char c= *(argv[3]);
        int resultado=0;
        switch (c)
        {
        case '+':
            resultado=valor_1+valor_2;
            break;
        case '-':
            resultado=valor_1-valor_2;
            break;
        case 'x':
            resultado=valor_1*valor_2;

        break;
        
        case '/':
            resultado=valor_1/valor_2;
            break;

        default:
           printf("Operacion no valida");
            break;

        }

        printf("El resultado de la operacion hecha es %d",resultado);
    }
    
    else 
        printf("La cantidad de argumentos no es valida.");

    return 0;
}