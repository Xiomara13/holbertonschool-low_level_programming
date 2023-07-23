#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - is the prototype
 * @name: is the name
 * @f: is the pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	f(name);
	}
}
