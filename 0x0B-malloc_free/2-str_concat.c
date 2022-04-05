#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: pointer to first string to concatenate
 * @s2: pointer to the second string to concatenate
 *
 * Return: NULL if string is empty else pointer to the concatenated string
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	size_t str_size;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str_size = strlen(s1) + strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (str_size + 1));
	if (s3 == NULL)
		return (NULL);
	strcat(s1, s2);
	strcpy(s3, s1);
	return (s3);
}
