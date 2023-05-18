#include <stdio.h>



int main(){
    // cuando trabajamos con punteros, si los iguales se igualas las direccione sde memoria, pero si se modifican en algun momento tendremos que volver a igualarlas
    int *a,*b,c,d,*e;
    c=10;
    d= c*2;
    a=e;
    printf("%p\n",a);
    printf("%p\n",e);
    e=&c;
    printf("%p\n",a);
    printf("%p\n",e);
    b=a;
        printf("%p\n",a);
    printf("%p\n",e);
        printf("%p\n",b);
    *b=15;
    printf("Valor de a: %d",c);
    return 0;
}