#include <stdlib.h>

/**
  * print_name - Prints a name using the passed function
  * @name: Name to be printed
  * @f: Function to be used to print the name
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

