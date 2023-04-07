#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i;
    int a;
    srand(time(NULL));
    a = rand() % 101;
    printf("%d", a);
    return 0;
}
