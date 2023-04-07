#include <stdio.h>
#define N 10
typedef struct  {
    float base;
    float altura;
} rectangulo;

void inicializar(rectangulo *r) {
    printf("Ingrese base: ");
    scanf("%f", &(r->base));
    printf("Ingrese altura: ");
    scanf("%f", &(r->altura));
}

float calcularArea(rectangulo r) {
    float area = r.base * r.altura;
    return area;
}

int main() {   
    rectangulo rect;
    inicializar(&rect);
    printf("%f\n", rect.altura);
    printf("%f\n", rect.base);
    printf("La altura del rectangulo es %f\n", calcularArea(rect));

    rectangulo vectorRec[N];
    int i;
    for (i = 0; i < N; i++) {
        inicializar(&vectorRec[i]);
    }

    float areaAct;
    float areaMin = 9999;
    int pos;
    for (i = 0; i < N; i++) {
        areaAct = calcularArea(vectorRec[i]);
        if (areaAct < areaMin) {
            areaMin = areaAct;
            pos = i+1;
        }
    }

    printf("El rectangulo con area mas chica del vector es el %d con un area de %f\n", pos, areaMin);

    return 0;
}
