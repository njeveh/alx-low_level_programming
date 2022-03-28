#include "main.h"

/**
  * _strspn - returns length of specified substring
  * @s: string being checked
  * @accept: substring to be used
  *
  * Return: number of bytes in segment of s
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	if (s == 0 || accept == 0)
		return (n);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (n);
		}
	}
	return (n);
}
