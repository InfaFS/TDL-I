#include <stdio.h>
#include <string.h>

int main(){
    char string[21];
    int longMenor=9999;

    scanf("%s",string);
     if (strlen(string)<longMenor){
            longMenor=strlen(string);
        }

    while (strcmp(string,"FIN")!=0){
        scanf("%s",string);
         if (strlen(string)<longMenor){
            longMenor=strlen(string);
        }
    }

    printf("%d",longMenor);




    return 0;
}