#include <time.h>
#include <stdio.h>

#define N 10

int main() {
    int numeros[N] = {0};
    int i;
    int numero, digito;
    printf("Ingrese el valor: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        switch (digito) {
            case 1:
                numeros[1]++;
                break;
            case 2:
                numeros[2]++;
                break;
            case 3:
                numeros[3]++;
                break;
            case 4:
                numeros[4]++;
                break;
            case 5:
                numeros[5]++;
                break;
            case 6:
                numeros[6]++;
                break;
            case 7:
                numeros[7]++;
                break;
            case 8:
                numeros[8]++;
                break;
            case 9:
                numeros[9]++;
                break;
            default:
                numeros[0]++;
                break;
        }
        numero /= 10;
    }

    for (i = 0; i < N; i++) {
        printf("La cantidad de veces que aparecio el digito %d en el entero es %d\n", i, numeros[i]);
    }
    return 0;
}