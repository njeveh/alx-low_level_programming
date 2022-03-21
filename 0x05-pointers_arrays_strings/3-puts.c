#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: a pointer to a string
 *
 *Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar(10);
}
