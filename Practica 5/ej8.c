#include <stdio.h>

int main() {
    FILE* file;
    file = fopen("numeros.txt", "w");


    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    int number;
    printf("Enter numbers (0-9) to write to the file (Enter -1 to exit):\n");

    while (1) {
        printf("Enter a number (0-9): ");
        scanf("%d", &number);

        if (number == -1) {
            break;
        }

        if (number >= 0 && number <= 9) {
            fputc('0' + number, file); //le tengo que agregar el '0' para que el numero decimal se ponga en codigo ascii
            fputc(' ', file);//para indicar el salto de espacio
        } else {
            printf("Invalid number. Please enter a number between 0 and 9.\n");
        }
    }

    fclose(file);
    printf("Numbers written to 'numbers.txt' successfully.\n");

    return 0;
}
