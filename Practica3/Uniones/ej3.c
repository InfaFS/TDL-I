#include <stdio.h>

#include <string.h>

typedef union{
    char  pasaporte [50];
    int DNI;

}identificacion;


typedef struct {
    char name [50];
    char lastname [50];
    char legajo [50]; //pongo char porque puede ser con una /
    identificacion identidad;

}estudiante;

void leer (estudiante *estudio, int*id){
    char entry [50];
    

        printf("Ingrese nombre del estudiante: \n");

        scanf("%s",estudio->name);

        printf("Ingrese apellido del estudiante: \n");

        scanf("%s",estudio->lastname);

        printf("Ingrese legajo del estudiante: \n");

        scanf("%s",estudio->legajo);

        printf("Proceso de identificacion (Ingrese EXTRANJERO para pasaporte, ARGENTINO para DNI): \n");

        scanf("%s",&entry);

        if (strcmp(entry,"EXTRANJERO")==0){
            printf("Ingrese PASAPORTE\n");
            scanf("%s",estudio->identidad.pasaporte);
        }

        else if (strcmp(entry,"ARGENTINO")==0){
            *id=1;
            printf("Ingrese DNI\n");
            scanf("%d",&estudio->identidad.DNI); //le tengo que poner & porque no es un vector

        }
    
    

}

int main(){
    int identificador=0;
    estudiante estudio;
    leer (&estudio,&identificador);

    printf("Nombre del estudiante: %s\n ",estudio.name);

    printf("Apellido del estudiante: %s\n ",estudio.lastname);

    printf("Legajo del estudiante: %s\n ",estudio.legajo);

    if (identificador=1){
        printf("Identificacion del estudiante ARGENTINO: %d\n",estudio.identidad.DNI);

    }
    else {
         printf("Identificacion del estudiante EXTRANJERO: %s\n",estudio.identidad.pasaporte);
    }
   



    return 0;
}