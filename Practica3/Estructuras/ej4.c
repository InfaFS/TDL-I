#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CARTAS 50
#define NUM_PALOS 4
#define NUM_CARTAS_PALO 12

// Constantes para representar los palos
const char* PALOS[NUM_PALOS] = {"oros", "copas", "espadas", "bastos"};

// Estructura para representar una carta
typedef struct carta {
  int valor;
  int palo;
} carta_t;

// Función para imprimir una carta
void imprimir_carta(carta_t c) {
  printf("%d de %s\n", c.valor, PALOS[c.palo]);
}

// Función para barajar el mazo de cartas
void barajar(carta_t* mazo, int num_cartas) {
  srand(time(NULL)); // Semilla para generar números aleatorios
  for (int i = 0; i < num_cartas; i++) {
    int j = rand() % num_cartas; // Generar índice aleatorio
    carta_t temp = mazo[i];
    mazo[i] = mazo[j];
    mazo[j] = temp;
  }
}

// Función para sacar una carta del mazo
carta_t sacar_carta(carta_t* mazo, int* num_cartas) {
  if (*num_cartas == 0) {
    printf("Error: el mazo está vacío.\n");
    carta_t carta_vacia = {0, 0}; // Carta vacía
    return carta_vacia;
  } else {
    carta_t carta_sacada = mazo[*num_cartas - 1];
    (*num_cartas)--;
    return carta_sacada;
  }
}

int main() {
  // Crear el mazo de cartas
  carta_t mazo[NUM_CARTAS];
  int num_cartas = NUM_CARTAS;
  int index = 0;
  for (int i = 0; i < NUM_PALOS; i++) {
    for (int j = 1; j <= NUM_CARTAS_PALO; j++) {
      carta_t c = {j, i};
      mazo[index] = c;
      index++;
    }
  }

  // Barajar el mazo y mostrar las cartas
  printf("Mazo barajado:\n");
  barajar(mazo, num_cartas);
  for (int i = 0; i < num_cartas; i++) {
    imprimir_carta(mazo[i]);
  }

  // Sacar algunas cartas y mostrarlas
  printf("Cartas sacadas:\n");
  for (int i = 0; i < 5; i++) {
    carta_t c = sacar_carta(mazo, &num_cartas);
    imprimir_carta(c);
  }

  return 0;
}
