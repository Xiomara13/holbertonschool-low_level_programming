#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function
 * @argc: number of arguments
 * @argv: content the arguments
 * Return: 1, 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
