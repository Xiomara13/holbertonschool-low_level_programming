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
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <26; j++)
		{
			_putchar(letter);
			letter++;
			}
		letter = 'a';
		/*Reset the letter to 'a' for the next line*/
	}
	_putchar('\n');
}
