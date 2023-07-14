#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - function
 * @min: range of values for the integer array
 * @max: range of values for the integer array
 * Return: NULL, arr
 */
int *array_range(int min, int max)
{
	int size, *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
