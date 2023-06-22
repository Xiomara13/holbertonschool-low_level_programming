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
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
		_putchar(letter++);
		}
	}
	_putchar('\n');
}
