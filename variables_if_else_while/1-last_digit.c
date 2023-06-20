#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));  // Inicializar la semilla para generar números aleatorios

	int n = rand();  // Generar un número aleatorio

	printf("Último dígito de %d es ", n);

	int ultimoDigito = n % 10;

	printf("%d ", ultimoDigito);

	printf("y es ");

	if (ultimoDigito > 5)
	{
		printf("mayor que 5\n");
    }
	else if (ultimoDigito == 0)
	{
		printf("0\n");
    }
	else
	{
		printf("menor que 6 y no 0\n");
    }

    return 0;
}

