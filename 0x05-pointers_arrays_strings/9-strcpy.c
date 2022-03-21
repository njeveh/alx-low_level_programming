#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 *Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*temp = *src;
		++src;
		++temp;
	}
	*temp = '\0';
	return (dest);
}
