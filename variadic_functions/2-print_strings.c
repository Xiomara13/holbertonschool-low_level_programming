#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: the strings to be printed
 * @n:number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	const char *current_string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(args, const char *);
		if (current_string != NULL)
			printf("%s", current_string);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
