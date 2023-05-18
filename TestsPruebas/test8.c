#include <stdio.h>
#include <string.h>


void inv_str( char s1[]){
    int cant = strlen(s1)-1;
    char *s2= s1;
    char temp;
    int i;

    for (i=(cant)/2;cant>i;cant--){
        temp = *s2;
        *s2=s1[cant];
        s1[cant]=temp;
        s2++;
    }
}


int main(){
    char s1[]="hola";
    inv_str(s1);
    printf("La str invertida es: %s",s1);


    return 0;
}