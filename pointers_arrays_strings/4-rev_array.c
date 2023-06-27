#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse the content of an array of integer
 * @a: pointer to the array of integer
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
