#include <stdio.h>

int main()
{
    FILE *arch;
    arch = fopen("jugador", "rb");

    if (arch)
    {
        fseek(arch, 0, SEEK_END);

        int size = ftell(arch);
        rewind(arch);

        printf("El tamanio del archivo es %d", size);

        fclose(arch);

        return 0;
    }
    else
    {

        printf("No se pudo abrir correctamente");
        return 1;
    }
}