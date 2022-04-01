#include "main.h"

/**
 * main - a program that prints it's name
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		++i;
	}
	_putchar(10);
	return (0);
}
