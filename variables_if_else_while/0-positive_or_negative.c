#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // Inicializar la semilla para generar números aleatorios

    int n = rand() % 201 - 100;  // Generar un número aleatorio entre -100 y 100

    printf("El número %d es ", n);

    if (n > 0) {
        printf("positivo\n");
    } else if (n < 0) {
        printf("negativo\n");
    } else {
        printf("cero\n");
    }

    return 0;
}
