#include "main.h"

/**
 * *cap_string - capitalises every first letter of words in a string
 * @s: string to capitalise
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/*Account for first character*/
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		/* Check for separating characters */
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
		    || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
		    || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
		    || s[i] == '}')
		{
			/* Capitalise the first letter after the separator */
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
