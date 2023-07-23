#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints number
 * @separator: the string to be printed between numbers
 * @n: number of integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int number = va_arg(args, int);

		printf("%d", number);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
