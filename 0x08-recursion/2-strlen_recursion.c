#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string whose length is being sought
 *
 * Return: an integer value of the string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		++i;
		++s;
		_strlen_recursion(s);
	}
	return (i);
}
