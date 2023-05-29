#include <stdio.h>

typedef struct
{
    int ranking;
    int cant_titulos;
} jugador;

int actualizarRanking(int, int);
int mostrarRankings();

int main()
{
    int ranking_nuevo;
    int titulos;
    jugador v[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese el nuevo ranking: ");
        scanf("%d", &ranking_nuevo);

        printf("Ingrese cantidad de titulos para buscar al jugador: ");
        scanf("%d", &titulos);

        actualizarRanking(ranking_nuevo, titulos);
    }
    // mostrarRankings();

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
                printf("entro en la vuelta donde n vale %d", n);
                j.ranking = ranking_nuevo;
                fseek(arch, -sizeof(jugador), SEEK_CUR); // si o si hacer esto para posicionarme en un lugar determinado, en esto le resto un sizeof de jugador al fseek porque en elread avance esos bytes
                fwrite(&j, sizeof(jugador), 1, arch);
                exit = 0;
            }
            n++;
            fread(&j, sizeof(jugador), 1, arch);
        }
        if (exit)
        {
            printf("El jugador buscado no existe.");
        }
        fseek(arch, 0, SEEK_SET);
        fread(&j, sizeof(jugador), 1, arch);
        printf("Ranking de jugador 1 : %d\n", j.ranking);
        fread(&j, sizeof(jugador), 1, arch);
        printf("Ranking de jugador 2 : %d\n", j.ranking);
        fread(&j, sizeof(jugador), 1, arch);
        printf("Ranking de jugador 3 : %d\n", j.ranking);
        printf("\n");
        fclose(arch);

        return 0;
    }
    else
    {
        printf("Error al cargar, no se pudo hacer la modificacion..\n");
        return 1;
    }
}

int mostrarRankings()
{

    FILE *arch = fopen("jugador", "rb");
    jugador j;
    if (arch)
    {
        fread(&j, sizeof(jugador), 1, arch);
        while (!feof(arch))
        {

            printf("Ranking: %d\n", j.ranking);
            fread(&j, sizeof(jugador), 1, arch);
        }
        fclose(arch);
        return 0;
    }
    else
    {
        printf("No se pudo cargar el archivo ");
        return 1;
    }
}