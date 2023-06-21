#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times
 * prints alphabet in lower case, and new line
 */
void print_alphabet_x10(void)
{
	/*Code to print the alphabet 10 times*/
	char letter[] = "abcdefghijklmnñopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		while (letter[j] != '\0')
		{
			_putchar(letter[j]);
			j++;
		}
	}
	_putchar('\n');
}
