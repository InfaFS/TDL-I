#include <stdio.h>
#include <string.h>
#define N 2
typedef struct{

    char nombre[50];
    char apellido[50];
    int edad;
}registro;

typedef struct{
    
    unsigned int cara :2;
}campobits;

void cargarVector(registro v[],int length){
    int i=0;

    for (i=0;i<length;i++){
        strcpy(v[i].nombre,"Jose");
        strcpy(v[i].apellido,"Maria");
        scanf("%d",&(v[i].edad));

    }
}

void mostrarVector(registro v[], int length){
    int i=0;

    for (i=0;i<length;i++){
        printf("%s ",(v[i].apellido));
        printf("%s ",(v[i].nombre));
        printf("%d ",v[i].edad);
    }

}

void modificarR(registro *ptr){
    scanf("%d",&(ptr->edad));


}
int main(){
    registro r;

    r.edad=1;
    modificarR(&r);
    printf("r.edad %d",r.edad);



    return 0;
}