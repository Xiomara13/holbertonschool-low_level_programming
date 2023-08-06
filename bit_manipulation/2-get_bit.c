#include <stdio.h>
#include "main.h"
/**
 * get_bit - function
 * @n:a unsigned long
 * @index: an unsigned int
 * Return: bit, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;
	int bit;

	if (index >= (unsigned int)num_bits)
	{
		return (-1);
	}
	bit = (n & mask) >> index;
	return (bit);
}
