#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    int dni;
    int desplazamiento;
} st;

int main()
{

    FILE *personas;
    FILE *personasB;

    personas = fopen("personas.csv", "r");
    personasB = fopen("personas.idx", "wb+");

    st estructura;
    char str[100];
    int i = 0;
    int posicion;
   long int DNI;
    int DNI_ACT;
    if (personas && personasB)
    {
        st *vector = (st *)malloc(5 * sizeof(st));
        fscanf(personas, "%s", str);

        for (i = 0; i < 5; i++)
        {
            posicion = ftell(personas);
            fscanf(personas, "%d;", &DNI);
            fscanf(personas, "%ld;", &DNI);
            fgets(str, 100, personas);
            estructura.dni = DNI;
            estructura.desplazamiento = posicion;
            vector[i] = estructura;
        }

        printf("DNI | DESPLAZAMIENTO\n");
        fwrite(vector, 5 * sizeof(st), 1, personasB);

        fseek(personasB, 0, SEEK_SET);
        fread(vector, 5 * sizeof(st), 1, personasB);

        for (i = 0; i < 5; i++)
        {
            printf("%d       %d\n", vector[i].dni, vector[i].desplazamiento);
        }

        st aux;
        int pos;
        for (i = 0; i < 5; i++)
        {
            aux.dni = 99999999;
            for (int j = i; j < 5; j++)
            {
                if (vector[j].dni < aux.dni)
                {
                    aux = vector[i];
                    vector[i] = vector[j];
                    vector[j] = aux;
                }
            }
        }
        printf("DNI | DESPLAZAMIENTO\n");
        for (i = 0; i < 5; i++)
        {
            printf("%d       %d\n", vector[i].dni, vector[i].desplazamiento);
        }

        printf("Ingrese la persona a buscar: ");
        int desplazamiento;
        scanf("%d", &desplazamiento);

        for (i = 0; i < 5; i++)
        {
            if (vector[i].desplazamiento == desplazamiento)
            {
                fseek(personas, desplazamiento, SEEK_SET);
                fgets(str, 100, personas);
                printf("%s", str);
            }
        }

        free(vector);
        fclose(personas);
        fclose(personasB);

        return 0;
    }
    else
    {
        printf("NO FUNCO");
        return 1;
    }
}