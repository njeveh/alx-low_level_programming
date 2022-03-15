#include "main.h"

/**
 * main - prints Holberton
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
