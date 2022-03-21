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

	for (i = k - 1, j = 0; i > (k / 2) && j < (k / 2); --i, ++j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
