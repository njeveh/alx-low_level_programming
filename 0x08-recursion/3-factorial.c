#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number whose factorial is being sought
 *
 * Return: int -the factorial of the number
 */

int factorial(int n)
{
	int fact;

	if (n == 1)
		return (1);
	fact = n * factorial(n - 1);
	return (fact);
}
