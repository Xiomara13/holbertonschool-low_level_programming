#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - returns a pointer
 * @str: check
 * Return: new_str
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *new_str = NULL;

	new_str = (char *)malloc((len + 1) * sizeof(char));

	if (new_str != NULL)
	{
		strcpy(new_str, str);
	}
	return (new_str);
}
