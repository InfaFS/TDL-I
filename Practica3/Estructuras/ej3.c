#include <stdio.h>

typedef struct{
    float x;
    float y;
    float z;


}pun3D;





int main()
{
    pun3D punto3d;
    
    printf("%lu",sizeof(punto3d));

    printf("%lu",sizeof(pun3D));

    pun3D vectorPun [4];
    
    printf("%lu",sizeof(vectorPun));

    return 0;
}
