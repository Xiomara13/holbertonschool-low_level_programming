#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameter
 * @n: number of argument
 * @...: A variable number of argument to sum
 * Return: the sum of all the argument
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
