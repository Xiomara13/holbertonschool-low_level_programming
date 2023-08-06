#include<stdio.h>
#include"main.h"
/**
 * count_set_bits - function
 * @n: number
 * Return: count
 */
unsigned int count_set_bits(unsigned long int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - function the calculate
 * @n: number
 * @m: number input
 * Return: count_set_bits(xor_result)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (count_set_bits(xor_result));
}
