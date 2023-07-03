#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - checks whether an input integer
 * @n: is less than or equal
 * Return: 0, 1
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

