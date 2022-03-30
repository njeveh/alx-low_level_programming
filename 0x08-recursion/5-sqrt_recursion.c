#include "main.h"

/**
  * find_root - finds square root of a given number
  * @i: number to find square root of
  * @j: possible roots
  *
  * Return: -1 if n there is non natural root and the root if found
  */
int find_root(int i, int j)
{
	if (j * j == i)
		return (j);
	if (j * j > i)
		return (-1);
	return (find_root(i, j + 1));
}

/**
  * _sqrt_recursion - finds square root of a given number
  * @n: number to find square root of
  *
  * Return: -1 if n does'nt have a natural square root else the square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
