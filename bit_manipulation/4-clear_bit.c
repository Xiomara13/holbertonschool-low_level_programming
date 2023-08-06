#include<stdio.h>
#include "main.h"
/**
 * clear_bit - function
 * @n: pointer
 * @index: unsigned int
 * Return: -1 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num_bits = sizeof(unsigned long int) * 8;
	unsigned long int mask = ~(1UL << index);

	if (index >= (unsigned int)num_bits)
	{
		return (-1);
	}
	*n &= mask;
	return (1);
}
