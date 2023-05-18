#include<stdio.h>
#include<stdlib.h>

int* reallocar(int* vector, int size);

int main() {
    int* vector = NULL;
    int n = 0;
    int size = 0;

    printf("Ingrese un numero para conocer sus divisores: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            size++;
            vector = reallocar(vector, size);
            vector[size - 1] = i;
        }
    }

    printf("Divisores: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    free(vector);
    return 0;
}

int* reallocar(int* vector, int size) {
    return (int*)realloc(vector, size * sizeof(int));
}
