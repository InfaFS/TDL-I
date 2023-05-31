#ifndef imath_included
#define imath_included

int potencia(int x, int y){

    for (int i=1;i<y;i++){
        x=x*x;
    }
    return x;
}

int cuadrado (int x){
    x=x*x;
    return x;
}

int cubo(int x){
    x=x*x*x;
    return x;
}

int absoluto (int x){
    if (x<0){
        x=(x*(-1));
        return x;
    }
    else return x;
}
#endif