#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 *Prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	/*Code to print the alphabet*/
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
