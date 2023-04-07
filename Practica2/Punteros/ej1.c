#include <stdio.h>
#include <stdlib.h>
#define N 3

void operaciones(float[], float *, float *, float *);

float sacarMin(float[]);

float sacarMax(float[]);

float sacarProm(float[]);

int main()
{

    float max = -1;
    float min = 9999;
    float promedio = 0;
    float vector[N] = {1.2, 0.2, 67};

    operaciones(vector, &max, &min, &promedio);

    printf("Promedio= %f \nMaximo= %f \nMinimo= %f \n", promedio, max, min);
    return 0;
}

float sacarMin(float v[N])
{

    int i;
    float min = 9999;
    for (i = 0; i < N; i++)
    {
        if (v[i] < min)
            min = v[i];
    }
    return min;
}

float sacarMax(float v[N])
{

    int i;
    float max = -1;
    for (i = 0; i < N; i++)
    {
        if (v[i] > max)
            max = v[i];
    }
    return max;
}

float sacarProm(float v[N])
{

    int i;
    float suma = 0, prom = 0;
    ;
    for (i = 0; i < N; i++)
    {
        suma += v[i];
    }

    prom = (suma / N);
    return prom;
}

void operaciones(float v[N], float *max, float *min, float *promedio)
{
    *min = sacarMin(v);
    *max = sacarMax(v);
    *promedio = sacarProm(v);
}
