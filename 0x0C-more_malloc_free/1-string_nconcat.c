#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes from s2 to concatenate with s1
 * Return: pointer to the new string on success, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, t_len, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len2 = n >= len2 ? len2 : n;
	t_len = len1 + len2 + 1;
	ptr = malloc(sizeof(*ptr) * t_len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		++s1;
		++i;
	}

	for (j = 0; j < len2; ++j)
	{
		ptr[i] = s2[j];
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * _strlen - determines the length of a string
 * @ptr: pointer to the string
 *
 * Return: int - the string length
 */

int _strlen(char *ptr)
{
	unsigned int len = 0;

	while (*ptr != '\0')
	{
		++len;
		++ptr;
	}
	return (len);
}
