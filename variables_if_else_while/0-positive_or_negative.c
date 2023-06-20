#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	/* Inicializar la semilla para generar números aleatorios*/
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Generar un número aleatorio entre -100 y 100*/

	printf("El número %d es ", n);

	if (n > 0)
	{
		printf("positivo\n");
	}
	else if (n < 0)
	{
		printf("negativo\n");
	}
	else
	{
		printf("cero\n");
	}

	return (0);
}
