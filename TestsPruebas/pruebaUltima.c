#include <stdio.h>
#include <string.h>

int main(){

    char s1[]="pepe";
    int cant =strlen(s1)-1;
    char *s2= s1+ cant;
    char temp;
    int i;
    for (i=0;i<=cant/2;i++){
        temp=s1[i];
        s1[i]=*s2;
        *s2=temp;
        s2--;
    }

    puts(s1);
    
    unsigned int valorU;
    scanf("%u",&valorU);
    printf("%u",valorU);

    return 0;
}