#include <stdio.h>
#include <string.h>
int main(){

    char pepe[8];
    gets(pepe);
    puts(pepe);

    scanf ("%c",&pepe[1]);
    puts(pepe);
    return 0;
}