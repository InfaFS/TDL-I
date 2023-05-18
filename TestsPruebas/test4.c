#include <stdio.h>
#include <string.h>
#define N 2
struct alu {

    char apellido[50];
    char nombre[50];
    char legajo[8];

};

typedef struct alu alumno;

void inicializarAlumno(alumno * );
void imprimirInfo(alumno);





int main(){
    
    alumno x;
    alumno arreglo[N];
    int i;

    for (i=0;i<N;i++){
        inicializarAlumno(&arreglo[i]);
    }

    for (i=0;i<N;i++){
        imprimirInfo(arreglo[i]);
    }



    return 0;
}

void inicializarAlumno (alumno *alum){
    scanf("%s",(alum->apellido));
    scanf("%s",(alum->nombre));
    scanf("%s",(alum->legajo));

}

void imprimirInfo(alumno alum){
    printf("Apellido y Nombre: %s, %s | Legajo: %s",alum.apellido,alum.nombre,alum.legajo);

}