#include <stdio.h>
#include <stdlib.h>

void function(int, float *, float *);

int main()
{
    float max = -1; /* se podria poner que se iguale a un valor que se lee por teclado antes de entrar ahi */
    float min = 9999;
    int n;
    printf("Ingrese un valor: \n");
    scanf("%d", &n);
    function(n, &max, &min);
    printf("El valor maximo fue  %f, el minimo fue %f", max, min);
    return 0;
}

void function(int n, float *max, float *min)
{ /* porque no seria con else, solo con if ya que no permite que entre al otro if */
    int i;
    auto float temp;
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &temp);
        if (temp > *max)
        {
            *max = temp;
        }
        if (temp < *min)
        {
            *min = temp;
        }
    }
}
