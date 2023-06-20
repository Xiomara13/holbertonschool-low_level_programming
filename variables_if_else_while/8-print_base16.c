#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'z'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');

	return (0);
}
