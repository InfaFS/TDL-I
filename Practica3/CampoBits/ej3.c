#include <stdio.h>


typedef struct  {
   unsigned int Bluetooth :1;
   unsigned int Wifi :1;
   unsigned int GPS :1;
   unsigned int Datos :1;
   unsigned int CamaraFrontal :1;
   unsigned int CamaraTrasera :1;
   unsigned int Linterna :1;
   unsigned int Vibrar :1;
}ModuloTelefono;

const ModuloTelefono COMPLETO = {1,1,1,1,1,1,1,1};
const ModuloTelefono INCOMPLETO = {0};

void mostrarEstado (ModuloTelefono telefono){
    printf("Estado de los modulos del telefono: \n ");
    if (telefono.Bluetooth & 1){
        printf("Bluetooth--> ON\n");
    }
    else {
        printf("Bluetooth--> OFF\n");
    }

    if (telefono.Wifi& 1){
        printf("Wifi--> ON\n");
    }
    else {
        printf("Wifi--> OFF\n");
    }

    if (telefono.GPS & 1){
        printf("GPS--> ON\n");
    }
    else {
        printf("GPS--> OFF\n");
    }
     
    if (telefono.Datos & 1){
        printf("Datos--> ON\n");
    }
    else {
        printf("Datos--> OFF\n");
    }

    if (telefono.CamaraFrontal & 1){
        printf("Camara Frontal --> ON\n");
    }
    else {
        printf("Camara Frontal--> OFF\n");
    }

    if (telefono.CamaraTrasera & 1){
        printf("Camara Trasera --> ON\n");
    }
    else {
        printf("Camara Trasera--> OFF\n");
    }

    if (telefono.Linterna & 1){
        printf("Linterna --> ON\n");
    }
    else {
        printf("Linterna--> OFF\n");
    }

    if (telefono.Vibrar & 1){
        printf("Vibrar --> ON\n");

    }
    else {
        printf("Vibrar --> OFF\n");
    }

}

void modificar_estado (ModuloTelefono *telefono){
    int entry;
    printf("Bienvenido a la interfaz de modulos del telefono\n");
    printf("Lista de comandos:\n ");
    printf("Para salir--> -1\n");
    printf("Para activar todo--> 0\n");
    printf("Para desactivar todo--> 1\n");


    printf("Activar Bluetooth --> 2");
    printf("  Desactivar Bluetooth --> 3");
    printf("  Invertir estado Bluetooth --> 4\n");

    printf("Activar Wifi --> 5");
    printf("  Desactivar Wifi --> 6");
    printf("  Invertir estado Wifi --> 7\n");

    printf("Activar GPS --> 8");
    printf("  Desactivar GPS --> 9");
    printf("  Invertir estado GPS --> 10\n");

    printf("Activar Datos --> 11");
    printf("  Desactivar Datos --> 12");
    printf("  Invertir estado Datos --> 13\n");

    printf("Activar Camara Frontal --> 14");
    printf("  Desactivar Camara Frontal --> 15");
    printf("  Invertir estado Camara Frontal --> 16\n");

    printf("Activar Camara Trasera --> 17");
    printf("  Desactivar Camara Trasera --> 18");
    printf("  Invertir estado Camara Trasera --> 19\n");

    printf("Activar Datos --> 20");
    printf("  Desactivar Datos --> 21");
    printf("  Invertir estado Datos --> 22\n");

    printf("Activar Linterna --> 23");
    printf("  Desactivar Linterna --> 24");
    printf("  Invertir estado Linterna --> 25\n");

    printf("--> ");
    scanf("%d",&entry);
    
        switch (entry)
        {
        case 0:
            *telefono=COMPLETO;
            break;
        case 1:
            *telefono=INCOMPLETO;
            break;
        
        case 5:
            telefono->Wifi = 1;
            break;

        case 6:
            telefono->Wifi = 0;
            break;
        
        case 7:
            telefono->Wifi ^= 1;
            break;

        // asi para todo lo demas
        
        default:
            break;
        }


}

int main(){

    ModuloTelefono telefono;
    telefono=INCOMPLETO;
    modificar_estado(&telefono);
    mostrarEstado(telefono);


    return 0;
}