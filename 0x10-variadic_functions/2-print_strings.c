#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed as arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(ap, char *);
		str = str != NULL ? str : "(nil)";
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%s\n", str);
			printf("%s", str);
		}
		else
		{
			if (i == n - 1)
				printf("%s\n", str);
			printf("%s%s", str, separator);
		}
	}
	va_end(ap);
}
