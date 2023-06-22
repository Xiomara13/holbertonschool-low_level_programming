#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times
 * prints alphabet in lower case, and new line
 */
void print_alphabet_x10(void)
{
	/*Code to print the alphabet 10 times*/
	int i;
	char letter = 'a';

	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;

		}
		letter = 'a';
		_putchar('\n');
	}
}
