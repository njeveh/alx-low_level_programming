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
		for (i = size - 1; i >= 0; --i)
		{
			for (j = 0; j < size; ++j)
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
