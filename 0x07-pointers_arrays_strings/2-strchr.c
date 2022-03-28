#include "main.h"

/**
 * *_strchr - locates a character in a string.
 *
 * @c: the character to locate
 * @s: pointer to the string to be searched
 *
 * Return: location of the first occurence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	return (0);
}
