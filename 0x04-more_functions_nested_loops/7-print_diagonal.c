#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of characters to be printed
 *
 *Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		int i, j;

		for (i = 0; i <= n; ++i)
		{
			for (j = i; j > 0; --j)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar(10);
		}
	}
}
