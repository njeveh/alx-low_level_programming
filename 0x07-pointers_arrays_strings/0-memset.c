#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: pointer to memory area to be filled
 * @b: the character to fill memory with
 * @n: the number of times to insert the character
 *
 *Return: pointer to filled memmory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	int i;

	for (i = 0; i < n; ++i)
	{
		*temp = b;
		++temp;
	}
	return (s);
}
