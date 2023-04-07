#include <stdio.h>
#include <stdlib.h>

int palindroma(char *);
int palindroma_v2(char *);
int main()
{
    char str = "saco";
    char *Ptr = str;

    if (palindroma(Ptr))
    {
        printf("%s es palindromo\n", str);
    }
    else
    {
        printf("%s no es palindromo\n", str);
    }

    return 0;
}

/* opcion 1 */

int palindroma(char *v)
{
    int i;
    int longitud = strlen(v);
    for (i = 0; i < longitud / 2; i++)
    {
        if (v[i] != v[longitud - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

/* opcion 2 */

int palindroma_v2(char *v)
{
    char *inicio = v; /* asterisco manera de declarar */
    char *fin = v + strlen(v) - 1;

    while (fin > inicio)
    {
        if (*inicio != *fin)
        {
            return 0;
        }
        inicio++;
        fin--;
    }

    return 1;
}
