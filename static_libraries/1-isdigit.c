#include <stdio.h>
#include "main.h"
/**
 * _isdigit - check for a digit (o through 9)
 * @c: check the digit
 * Return: 1 if c is a digit o otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
