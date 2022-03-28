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
	int i = 0;
	char *z;

	z = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			z = &s[i];
			break;
		}
	}
	if (s[i] == c)
	{
		z = &s[i];
	}
	return (z);
}
