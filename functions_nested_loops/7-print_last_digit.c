#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @u: prints the last numero
 * Return: last digit of number
 */
int print_last_digit(int u)
{
	int last_digit = u % 10;

	_putchar(last_digit + '0');
			return (last_digit);
}
