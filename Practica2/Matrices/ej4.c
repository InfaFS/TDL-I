#define F 2
#define C 2
#include <time.h>
#include <stdio.h>

void modificarMatriz (int m[F][C]){
    int i,j;
    int aux;
    for (i=0;i<F;i++){
        printf("\n");

        for (j=0;j<C;j++){
            printf("%d ",m[i][j]);
        }

    }
    printf("\n//////////////");

    for (i=0;i<F;i++){
        for (j=0;j<C;j++){
            if ((j==C-1) && (i!=F-1)){
                aux=m[i][j];
                m[i][j]=m[i+1][0];
                m[i+1][0]=aux;
            }
        }

    }

    for (i=0;i<F;i++){
        printf("\n");

        for (j=0;j<C;j++){
            printf("%d ",m[i][j]);
        }

    }





}

int ej4() {
    int matriz [F][C]= { {0,3} , {2,1}};
    modificarMatriz(matriz);





    return 0;
}
