#include <stdio.h>
#include <stdlib.h>
#define N 6
int main()
{

    char v[N];
    int cont = 0;
    scanf("%s", &v);
    while (strcmp(v, "XXX") != 0)
    {
        if (v[4] == 'o')
        {
            cont++;
        }
        scanf("%s", &v);
    }
    printf("%d", cont);
    return 0;
}
