#include <stdio.h>

int main()
{ /* manera 1 */
    int i;
    printf("Comienza el proceso 1...\n");
    for (i = 1; i <= 50; i++)
        if (i % 5 == 0)
            printf("El %d es multiplo de 5 \n", i);
    /* manera 2 */
    int k;
    printf("Comienza el proceso 2...\n");
    for (k = 5; k <= 50; k += 5)
        printf("El %d es multiplo de 5 \n", k);
    return 0;
}
