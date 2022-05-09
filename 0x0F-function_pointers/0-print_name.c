#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using a given function
 * @name: pointer to the name
 * @f: pointer to the print function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
