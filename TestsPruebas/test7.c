#include <stdio.h>

int main(){

    int a,cant=0;
    scanf("%d",&a);
    while (a % 3){
        ++cant;
        scanf("%d",&a);
    }

    printf("%d",cant);


    return 0;
}