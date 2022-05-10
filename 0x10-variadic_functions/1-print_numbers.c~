#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed as arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; ++i)
			printf("%d ", va_arg(ap, int));
	}
	for (i = 0; i < n; ++i)
		printf("%d%s ", va_arg(ap, int), separator);
	_putchar(10);
}
