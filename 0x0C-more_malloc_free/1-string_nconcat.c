#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes from s2 to concatenate with s1
 * Return: pointer to the new string on success, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, s1_len, s2_len;
	char *ptr;
	int str_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	s2_len =  n >= s2_len ? s2_len : n;
	str_length = s1_len + s2_len;
	ptr = malloc(sizeof(*ptr) * (str_length + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; ++i)
		ptr[i] = s1[i];
	for (j = 0; j < s2_len; ++j, ++i)
		ptr[i] = s2[j];
	++i;
	ptr[i] = '\0';
	return (ptr);
}
