#include <stdio.h>

typedef struct{

//por cuestiones de practica vamos a probarlo no mas con 2 campos..
int ranking;
int cant_titulos;
}jugador;

void cargarJugador (jugador * j);

int main(){

    FILE * arch;
    jugador v[3];
    jugador v_2[3];

 

    arch=fopen("jugador","wb+");

    if (arch){
        int mejor_ranking=9999;
        int mejor_titulos=-1;
        int i;
        for(i=0;i<3;i++){
            cargarJugador(&v[i]);
        }

        fwrite(v,sizeof(jugador),3,arch);
        fseek(arch,0,SEEK_SET);
        for (i=0;i<3;i++){
            fread(&v_2[i],sizeof(jugador),1,arch);
        }

        for (i=0;i<3;i++){
            printf("v[%d].ranking = %d \t v[%d].cant_titulos= %d \n",i,v[i].ranking,i,v[i].cant_titulos);
        }

          for (i=0;i<3;i++){
            if (v_2[i].ranking<mejor_ranking){
                mejor_ranking=v_2[i].ranking;
            }

            if (v_2[i].ranking>mejor_titulos){
                mejor_titulos=v_2[i].cant_titulos;
                }
    
        }
    
        
        fclose(arch);
        printf("El jugador con mas titulos tiene %d y el que tiene mas ranking tiene %d",mejor_titulos,mejor_ranking);

    }
    else{
        printf("Error al cargar.");
        return 1;
    }
    

    return 0;
}

void cargarJugador (jugador * j){
    printf("Ingrese titulos: ");
    scanf("%d",&(j->cant_titulos));
    printf("Ingrese ranking: ");
    scanf("%d",&(j->ranking));

}
