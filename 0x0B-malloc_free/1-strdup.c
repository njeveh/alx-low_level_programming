#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string to be copied
 *
 * Return: NULL if str = NULL, else pointer to the duplicated string
 * on success or NULL on failure.
 */

char *_strdup(char *str)
{
	int i;
	size_t str_size;
	char *str_copy;

	if (str == NULL)
		return (NULL);
	str_size = strlen(str);
	str_copy = (char *)malloc(sizeof(char) * (str_size + 1));
	if (str_copy == NULL)
		return (NULL);
	strcpy(str_copy, str);
	return (str_copy);
}
