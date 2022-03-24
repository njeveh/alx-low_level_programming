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
	int dest_len, src_len;

	dest_len = strlen(dest);

	while (*src != '\0')
	{
		dest[dest_len] = *src;
		++dest_len;
		++src;
	}
	dest[dest_len] = '\0';
	return (dest);
}
