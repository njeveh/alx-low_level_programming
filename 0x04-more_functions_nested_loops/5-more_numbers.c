#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 10; ++i)
	{
		for (j = 48, k = 48; j <= 62 && k <= 57; ++j, ++k)
		{
			if (i == 10)
				break;
			
			if (j > 57)
			{
				k = 49;
			}

			_putchar(k);

			if (j > 57)
			{
				_putchar(j - 9);
			}
		}
		_putchar(10);
	}
}
