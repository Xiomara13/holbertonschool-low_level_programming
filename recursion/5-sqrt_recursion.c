#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - calculate the natural square
 * @n: integer
 * Return: -1, n, mid, result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int sqrt = _sqrt_recursion(n - 1);

	if (sqrt * sqrt <= n)
	{
		return (sqrt);
	}
	else
	{
		return (sqrt - 1);
	}
}
