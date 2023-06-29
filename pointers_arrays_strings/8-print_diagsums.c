#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - calculates and prints the sum of the two diagonals
 * @a: square matrix of integers and the size of the matrix as arguments
 * @size: size to the square
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
		if (i < size - 1)
		{
			printf("%d, ", sum1);
			printf("%d, ", sum2);
	}
<<<<<<< HEAD
	printf("%d, %d\n", sum1, sum2);
=======
		else
		{
			printf("%d\n", sum1);
			printf("%d\n", sum2);
		}
	}
>>>>>>> 0dd0016df540078dcfd57014a39e2c86256ba0bb
}
