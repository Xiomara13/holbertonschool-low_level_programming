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

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
