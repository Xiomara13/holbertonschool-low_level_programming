#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the adsolute value of an integer
 * @n: the integer to compute the adsolute value of
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
