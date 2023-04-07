
#define F 3
#define C 3
#include <time.h>
#include <stdio.h>

void sumaMatrices (int m1[F][C], int m2[F][C], int m3[F][C]){
    int i,j;

    for (i=0;i<F;i++){
        printf("\n");

        for (j=0;j<C;j++){
            printf("%d ",m1[i][j]);
        }

    }

    for (i=0;i<F;i++){
        printf("\n");

        for (j=0;j<C;j++){
            printf("%d ",m2[i][j]);
        }

    }

    for (i=0;i<F;i++){
        printf("\n");

        for (j=0;j<C;j++){
            printf("%d ",m3[i][j]);
        }

    }

    printf("\n// Proceso de sumado //");

    for (i=0;i<F;i++){
        for (j=0;j<C;j++){
            m3[i][j]=(m1[i][j]+m2[i][j]);
        }

    }


    for (i=0;i<F;i++){
        printf("\n");

        for (j=0;j<C;j++){
            printf("%d ",m3[i][j]);
        }

    }




}

int ej5() {
    int matrizA [F][C]= {{2,2,2},{2,2,2},{2,2,2}};

    int matrizB [F][C]= { {1,1,1},{1,1,1},{1,1,1}};

    int matrizC [F][C]= {0};

    sumaMatrices(matrizA,matrizB,matrizC);





    return 0;
}
