#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 *
 *Return: string pointer
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;

	dest_len = strlen(dest);
	dest += dest_len;

	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (dest);
}
