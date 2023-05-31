#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define AREA_CIRCULO(r) (M_PI * (r) * (r))
int main(){
    int ram=0;
    srand(time(NULL));
    for (int i=0;i<10;i++){
        
        ram=rand() % 11;
        ram= (float) ram;
        printf("El area del circulo con radio %d es %f\n",ram,AREA_CIRCULO(ram));

    }


    return 0;
}