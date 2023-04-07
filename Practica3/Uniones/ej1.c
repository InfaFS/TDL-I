#include <stdio.h>
#define N 4

typedef union {
    float x;
    float y;
    float ancho;
    float alto;
}ventana_1;

typedef union{
    float x;
    float y;

}dosPunXY;

typedef union{
    float alto;
    float ancho;

}dosPunAL_AN;

typedef union {
    dosPunAL_AN puntosAN_AL;
    dosPunXY puntosXY;
}ventana_2;


typedef union {
    float datos[N];
    
}ventana_3;

int main() {
    
    return 0;
}
