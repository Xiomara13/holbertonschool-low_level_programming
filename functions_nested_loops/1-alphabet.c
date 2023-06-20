#include <unistd.h>
/**
 * print_alphabet - entry point
 * Return: 0
 */
void print_alphabet(void)
{
	char letter = 'a';
	char end = 'z';

	for (char letter = start; letter <= end; letter++)
	{
		_putchar(letter);
	}
		_putchar('\n');
		return (0);
}
