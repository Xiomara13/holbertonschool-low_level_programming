#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times
 * prints alphabet in lower case, and new line
 */
void print_alphabet_x10(void)
{
	/*Code to print the alphabet 10 times*/
	char letter;
	int i;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (i = 0; i < 26 * 10; i++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
