#include <stdio.h>

int main() {
    FILE *f;
    int currentC;
    float currentM;
    float totalM = 0;

    f = fopen("apuest.txt", "r");
    if (f == NULL) {
        printf("Error al cargar el archivo.\n");
        return 1;
    }
    fscanf(f, "%d|%f;", &currentC, &currentM);
    while (!feof(f)) {
        totalM += currentM;
        fscanf(f, "%d|%f;", &currentC, &currentM);
    }

    printf("El monto total apostado es de %.2f\n", totalM);
    fclose(f);

    return 0;
}
