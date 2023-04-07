#include <stdio.h>
#include <string.h>

typedef enum  {
    Bluetooth = 1,
    Wifi = 2,
    GPS = 4,
    Datos = 8,
    CamaraFrontal = 16,
    CamaraTrasera = 32,
    Linterna = 64,
    Vibrar = 128
}ModuloTelefono;

const ModuloTelefono COMPLETO = Bluetooth | Wifi | GPS | Datos | CamaraFrontal | CamaraTrasera | Linterna | Vibrar;
const ModuloTelefono INCOMPLETO = 0;

void modificar_estado ( ModuloTelefono *telefono){
    int entry;
    printf("Bienvenido a la interfaz de modulos del telefono\n");
    printf("Lista de comandos:\n ");
    printf("Para salir--> EXIT\n");
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
            *telefono |=Wifi;
            break;

        case 6:
            *telefono &= ~Wifi;
            break;
        
        case 7:
            *telefono ^= Wifi;
            break;



        
        default:
            break;
        }
    
    




}

void mostrarEstado (ModuloTelefono telefono){
    printf("Estado de los modulos del telefono:\n ");
    if (telefono & Bluetooth){
        printf("Bluetooth--> ON\n");
    }
    else {
        printf("Bluetooth--> OFF\n");
    }

    if (telefono & Wifi){
        printf("Wifi--> ON\n");
    }
    else {
        printf("Wifi--> OFF\n");
    }

    if (telefono & GPS){
        printf("GPS--> ON\n");
    }
    else {
        printf("GPS--> OFF\n");
    }
     
    if (telefono & Datos){
        printf("Datos--> ON\n");
    }
    else {
        printf("Datos--> OFF\n");
    }

    if (telefono & CamaraFrontal){
        printf("Camara Frontal --> ON\n");
    }
    else {
        printf("Camara Frontal--> OFF\n");
    }

    if (telefono & CamaraTrasera){
        printf("Camara Trasera --> ON\n");
    }
    else {
        printf("Camara Trasera--> OFF\n");
    }

    if (telefono & Linterna){
        printf("Linterna --> ON\n");
    }
    else {
        printf("Linterna--> OFF\n");
    }

    if (telefono & Vibrar){
        printf("Vibrar --> ON\n");

    }
    else {
        printf("Vibrar --> OFF\n");
    }

}


int main(){
    ModuloTelefono telefono = INCOMPLETO;
    mostrarEstado(telefono);
    modificar_estado(&telefono);
     // usar el OR para activarlo (|=)
     //usar el NAND para desactivarlo (&= ~)
     //usar XOR para invertir (^=)
    
    mostrarEstado(telefono);


    return 0;
}