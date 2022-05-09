#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: pointer to the name
 * @f: pointer to the print function to be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
