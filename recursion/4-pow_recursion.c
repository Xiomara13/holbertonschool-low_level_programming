#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: -1, 1, x * _pow_recursion(x, y - 1)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
