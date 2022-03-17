#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 *Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; ++i)
		{

			for (j = 0; j < size ; ++j)
			{
				if (i == 0 || i == (size - 1) || j == 0 || j == (size - 1))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar(10);
		}
