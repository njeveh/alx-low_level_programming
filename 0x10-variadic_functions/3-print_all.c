#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *fmt;
	char *str;
	char *separator;

	fmt = format;
	i = _strlen(fmt);
	va_start(ap, i);
	j = 0;
	while (*fmt)
	{
		if (j == i - 1)
			separator = "\n";
		else
			separator = ", ";
		if (*fmt == 'c' || *fmt == 'i' || *fmt == 'f' || *fmt == 's')
		{
			switch (*fmt)
			{
			case 'c':
			{
				printf("%c%s", va_arg(ap, int), separator);
				break;
			}
			case 'i':
			{
				printf("%d%s", va_arg(ap, int), separator);
				break;
			}
			case 'f':
			{
				printf("%f%s", va_arg(ap, double), separator);
				break;
			}
			case 's':
			{
				str = va_arg(ap, char *);
				str = str != NULL ? str : "(nil)";
				printf("%s%s", str, separator);
				break;
			}
			default:
			}
			++fmt;
			++j;
		}
	}
	va_end(ap);
}

/**
 * _strlen - gets the length of a string
 * @str: pointer to the sring whose length is to be determined
 *
 * Return: length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		++len;
		++str;
	}
	return (len);
}
