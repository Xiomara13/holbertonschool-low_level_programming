#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: check the integer
 * @b: check the integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
