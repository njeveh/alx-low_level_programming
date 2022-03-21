#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: pointer to a string
 *
 *Return: void
 */

void puts2(char *str)
{
	int i, j;

	i = strlen(str);
	j = 0;
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar(10);
}
