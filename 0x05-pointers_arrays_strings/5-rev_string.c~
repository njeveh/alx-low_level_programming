#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 *Return: void
 */

void rev_string(char *s)
{
	char temp;
	int i, j, k;

	k = strlen(s);

	for (i = k - 1; i > (k/2); --i)
	{
		for (j = 0; j < (k/2); ++j)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
	}
}
