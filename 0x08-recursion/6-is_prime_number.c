#include "main.h"

/**
  * prime_checker - checks whether a number is a prime number
  * @i: number to check
  * @j: divisor
  *
  * Return: 1 if its a prime number otherwise zero
  */
int prime_checker(int i, int j)
{
	if (i < 2)
		return (0);
	if (i == 2)
		return (1);
	if (i % j == 0)
		return (0);
	if (j * j > i)
		return (1);

	return (prime_checker(i, j + 1));
}

/**
  * is_prime_number - checks whether the number passed is a prime number
  * @n: the number to be checked
  *
  * Return: 1 if its a prime number and 0 if it's not.
  */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else
		return (prime_checker(n, 2));
}
