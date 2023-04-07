
#define F 3
#define C 3
#include <time.h>
#include <stdio.h>

void modificarMatriz (int m[F][C]){
    int i,j;
    for (i=0;i<F;i++){
        for (j=0;j<C;j++){
            m[i][j]*=2;
        }

    }
    for (i=0;i<F;i++){
        for (j=0;j<C;j++){
           printf("%d",m[i][j]);
        }

    }





}
void recorrer_vector (int [], int);
int ej3() {
    int matriz [F][C]= { {0,3,4} , {2,1,4}, {2,2,2}};
    modificarMatriz(matriz);





    return 0;
}
