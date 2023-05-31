#include <stdio.h>
#include "istack.h"

int main()
{
    // Crear una nueva pila
    Stack* stack = s_create();

    // Apilar algunos elementos
    s_push(stack, 10);
    s_push(stack, 20);
    s_push(stack, 30);

    // Obtener el elemento en la parte superior de la pila
    int top_element = s_top(*stack);
    printf("Elemento en la parte superior: %d\n", top_element);

    // Desapilar un elemento
    int popped_element = s_pop(stack);
    printf("Elemento desapilado: %d\n", popped_element);

    // Verificar si la pila está vacía
    int is_empty = s_empty(*stack);
    printf("La pila está vacía: %s\n", (is_empty ? "Sí" : "No"));

    // Obtener la cantidad de elementos en la pila
    int stack_length = s_length(*stack);
    printf("Cantidad de elementos en la pila: %d\n", stack_length);

    // Liberar la memoria de la pila
    free(stack);

    return 0;
}
