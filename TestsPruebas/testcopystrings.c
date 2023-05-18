#include <stdio.h>
#include<string.h>
void inv_str(char* s1,char *dst, char rem_char){

    int cant = strlen(s1);

    int i,j=0;

    for (i=0;i<cant;i++){
        if (s1[i]!= rem_char){
            dst[j]=s1[i];
            j++;
        }
    }


}
int main(){

    char pepito[]="hanas";
    char saca [50];
    inv_str(pepito,saca,'n');
    puts(saca);

    return 0;
}


