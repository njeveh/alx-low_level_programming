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
	unsigned int i, j, s1_len, s2_len, str_length;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	s2_len =  n >= s2_len ? s2_len : n;
	str_length = s1_len + s2_len;
	ptr = malloc(sizeof(char) * (str_length + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		ptr[i] = s1[i];
		++i;
	}
	j = 0;
	while (j < s2_len)
	{
		ptr[i + j] = s2[j];
		++j;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
