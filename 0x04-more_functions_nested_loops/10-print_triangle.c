#include "main.h"

/**
 * print_triangle - prints a triangle pattern to console/terminal
 * @size: input for the triangle size
 *
 *Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; ++i)
		{
			for (j = 0; j <= i ; ++j)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
