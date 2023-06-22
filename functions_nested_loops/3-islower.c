#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 0
 */
int _islower(int c);
{
	char character = 'A';

	if (_islower(character))
	{
		printf("%c is lowercase.\n", character);
	} else
	{
		printf("%c is not lowercase.\n", character);
	}
	return (0);
}
