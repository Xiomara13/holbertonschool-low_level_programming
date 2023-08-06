#include<stdio.h>
#include"main.h"
/**
 * print_binary - function
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i;
	int num_bits = sizeof(unsigned long int) * 8;

	for (i = num_bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;
		unsigned long int bit = (n & mask) >> i;
		putchar(bit + '0');
	}
}
