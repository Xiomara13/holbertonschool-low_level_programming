#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - function
 * @argc: argument
 * @argv: character
 * Return: 98 99 100 0
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int (*oper_fun)(int, int) = get_op_func(argv[2]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (oper_fun == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = oper_fun(num1, num2);

	printf("%d\n", result);
	return (0);
}
