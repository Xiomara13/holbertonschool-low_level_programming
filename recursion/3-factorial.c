#include <stdio.h>
#include "main.h"
/**
 * factorial - calculates the factorial of a given number
 * @n: integer as input and calculates the factorial
 * Return: -1, 1, n * factorial(n - 1)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
