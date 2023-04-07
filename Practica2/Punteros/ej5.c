#include <stdio.h>
#define N 4

void swap(int[], int);

void imprimir_vector(int[]);

int main()
{
    int vector[N] = {1, 2, 3, 4};
    imprimir_vector(vector);
    swap(vector, N);
    imprimir_vector(vector);
    return 0;
}

void swap(int v[], int size)
{
    int i, temp;
    for (i = 0; i < size / 2; i++)
    {
        temp = v[i];
        v[i] = v[size - 1 - i];
        v[size - 1 - i] = temp;
    }
}

void imprimir_vector(int v[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("v[%d]= %d\n", i, v[i]);
    }
}
