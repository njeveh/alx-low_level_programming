#include "main.h"
#include <stdio.h>

/**
 * main - prints the result of the multiplication of its arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0) on success otherwise 1
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = (int) argv[1] * argv[2];
	printf("%d\n", mul);
	return (0);
}
