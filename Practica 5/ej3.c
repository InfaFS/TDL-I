#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * f;
    int max=-1;
    int current=0;
    f=fopen("precipitaciones.txt","r"); //ver como puedo no considerar el guion si estoy haciendo un scanf.

    fscanf(f,"%d",&current);
    current=current*-1;
    while (!feof(f)){
        if (current>max){
            max=current;
        }
        fscanf(f,"%d",&current);
        current=current*-1;
    }

    printf("El maximo es %d",max);


    fclose(f);


    return 0;
}