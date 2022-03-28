#include "main.h"

/**
  * *_strstr - finds the first occurrence of the passed substring
  * @haystack: string to be searched in
  * @needle: substring to locate
  *
  * Return: pointer to beginning of located substring or NULL if not found
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *p;

	p = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; needle[j] != '\0';)
			{
				if (haystack[k] == needle[j])
					k++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				p = &haystack[i];
			}
		}
	}
	return (p);
}
