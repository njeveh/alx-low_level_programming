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
	while (**argv != '\0')
	{
		_putchar(**argv);
		++*argv;
	}
}
