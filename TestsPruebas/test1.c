#include <stdio.h>
#include <stdint.h>

typedef struct{
    int a;
    int b;
    char string[50];



}estruct;

void cargarStruct(estruct *e){
    scanf("%d",&(e->a));
    scanf("%d",&(e->b));
    scanf("%s",e->string);
}

void imprimirStruct( estruct e){
    printf("Campo a %d\n",e.a);
    printf("Campo b %d\n",e.b);
    printf("String %s\n",e.string);


}



int main(){
    estruct e;
    cargarStruct(&e);
    imprimirStruct(e);

    int a=0;
   int b=7;

    printf(" a && b = %d", a && b);

    return 0;
}