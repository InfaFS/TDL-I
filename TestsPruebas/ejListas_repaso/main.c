#include <stdio.h>

int main(){

    FILE * F;
    F=fopen("a.txt","r");
    
    if (F!=NULL){
        fseek(F,0,SEEK_END);
        int size=ftell(F);
        printf("%d",size);

        


    }
    else {
        printf("Error");
        return 1;
    }

    return 0;
}