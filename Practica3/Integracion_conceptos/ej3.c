#include <stdio.h>
// Encendido y apagado del dispositivo
#define NO 0
#define YES 1
// Frecuencia de tonos musicales
typedef enum {BASE=440, DO=262, RE=294, MI=330, FA=349, SOL=392, LA=440,
SI=494} tono_t;
// Estructura de comando
typedef struct {
 unsigned encendido : 1;
 unsigned frecuencia : 15;
} comando_t;

/* Prototipos */
comando_t recibir_comando();
void generar_sonido(comando_t);
int main(){
 comando_t c;
 printf("Encendiendo el dispositivo...\r\n");
 c = recibir_comando();
 while(c.encendido == YES){
 // Es un valor de frecuencia válido
 if(c.frecuencia == DO || c.frecuencia == RE || c.frecuencia == MI ||
 c.frecuencia == FA || c.frecuencia == SOL || c.frecuencia == LA ||
 c.frecuencia == SI){
 generar_sonido(c);
 c=recibir_comando();
 } // Generar tono correspondiente
 else{
 printf("ERROR: Valor de frecuencia incorrecto.\r\n");
 c = recibir_comando();
 }

 }
 printf("Apagando el dispositivo...\r\n");
 return 0;
}
// Leer comando desde la entrada estándar con el formato "encendido.frecuencia"
comando_t recibir_comando(){
    comando_t c;
    char entry;
    int frecuencia;
    printf("Ingrese comando(Y/N): ");
    scanf("%c",&entry);
    if (entry=='Y'){
        c.encendido=1;
        printf("Ingrese frecuencia: ");
        scanf("%d",&frecuencia);
        c.frecuencia=frecuencia;
    }
    else {
        c.encendido=0;
        return c;
    }
    return c;
}

// Generar tono recibido por parámetro (sin implementar)
void generar_sonido(comando_t c){
 printf("Tono: %d Hz\r\n", c.frecuencia);
 return;
}