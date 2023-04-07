#include <stdio.h>
#include <string.h>
#define N 30

typedef struct {
    char calle [50];
    int cod_postal;
    char ciudad [30];
    char pais [40];
}direccion;

typedef struct {
    char nombre [50];
    char apellido [50];
    char legajo [8];
    float promedio;
    direccion domicilio;

} alumno;

void incializarAlumno  (alumno * alum){

    printf("Ingrese nombre \n");

    scanf ("%s",&(alum->nombre));

    printf("Ingrese apellido \n");

    scanf ("%s",&(alum->apellido));

    printf("Ingrese legajo \n");

    scanf ("%s",&(alum->legajo));

    printf("Ingrese promedio \n");

    scanf ("%f",&(alum->promedio));

    printf("Ingrese pais\n");

    scanf ("%s",&alum->domicilio.pais);

    printf("Ingrese ciudad\n");

    scanf ("%s",&alum->domicilio.ciudad);

    printf("Ingrese codigo postal \n");

    scanf ("%d",&alum->domicilio.cod_postal);

    printf("Ingrese calle \n");

    scanf ("%s",&alum->domicilio.calle);


}

int main (){

    char nom[50];
    char ape[50];
    float prom=-1;

    alumno vectorAlumnos [N];
    int i;
    for (i=0;i<N;i++){
    incializarAlumno( &vectorAlumnos[i]);
    }

    for (i=0;i<N;i++){
        if (vectorAlumnos[i].promedio>prom){
            prom = vectorAlumnos[i].promedio;
            strcpy(nom,vectorAlumnos[i].nombre);
            strcpy(ape,vectorAlumnos[i].apellido);
        }
    }


    printf ("El alumno %s %s tiene el mejor promedio con un %f", nom,ape,prom);



    

    return 0;
}