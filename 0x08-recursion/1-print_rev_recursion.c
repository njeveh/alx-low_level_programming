#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s);
	if (i == 0)
	{
		_putchar(10);
		return;
	}
	_putchar(s[i - 1]);
	s[i - 1] = '\0';
	_print_rev_recursion(s);
}
