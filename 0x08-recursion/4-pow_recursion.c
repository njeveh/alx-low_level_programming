#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: the value of x raise to the power oy y
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y == 0)
		return (1);
	i = x * _pow_recursion(x, y - 1);
	return (i);
}
