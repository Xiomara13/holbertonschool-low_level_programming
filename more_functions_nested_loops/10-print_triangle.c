#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
