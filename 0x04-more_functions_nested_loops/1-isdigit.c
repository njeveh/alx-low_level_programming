#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: an ascii character
 *
 * Return: 1 if c is digit otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
