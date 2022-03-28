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
	char *temp = s;

	while (*temp != '\0')
	{
		if (*temp == c)
		{
			return (temp);
		}
		++temp;
	}
	return (0);
}
