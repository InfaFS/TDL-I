#include <stdio.h>

typedef struct
{
    int ranking;
    int cant_titulos;
} jugador;

int actualizarRanking(int, int);

int main()
{
    int ranking_nuevo;
    int titulos;

    printf("Ingrese el nuevo ranking: ");
    scanf("%d", &ranking_nuevo);

    printf("Ingrese cantidad de titulos para buscar al jugador: ");
    scanf("%d", &titulos);

    actualizarRanking(ranking_nuevo, titulos);

    return 0;
}

int actualizarRanking(int ranking_nuevo, int titulos)
{
    FILE *arch = fopen("jugador", "rb+");
    if (arch)
    {
        int n = 0;
        jugador j;
        int exit = 1;

        fread(&j, sizeof(jugador), 1, arch);
        while (!feof(arch) && (exit != 0))
        {
            if (j.cant_titulos == titulos)
            {
                j.ranking = ranking_nuevo;
                fseek(arch, -sizeof(jugador), SEEK_CUR);
                fwrite(&j, sizeof(jugador), 1, arch);

                exit = 0;
            }
            n++;
            fread(&j, sizeof(jugador), 1, arch);
        }

        // fseek(arch, 0, SEEK_SET);
        // fread(&j, sizeof(jugador), 1, arch);
        // printf("El ranking del jugador 1 es %d", j.ranking);
        // fread(&j, sizeof(jugador), 1, arch);
        // printf("El ranking del jugador 2 es %d", j.ranking);
        // fread(&j, sizeof(jugador), 1, arch);
        //  printf("El ranking del jugador 3 es %d", j.ranking);
        fclose(arch);
        return 0;
    }
    else
    {
        printf("Error al cargar, no se pudo hacer la modificacion..\n");
        return 1;
    }
}