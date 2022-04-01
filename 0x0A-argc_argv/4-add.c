#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the number of arguments passed to it
  * @argc: the number of arguments passed to the function
  * @argv: an aray of the commanf line arguments passed to the functionn
  *
  * Return: 0 if succesful and 1 if there's an error
  */

int main(int argc, char *argv[])
{
	int ans = 0, i, j;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		ans += atoi(argv[i]);
	}
	printf("%d\n", ans);
	return (0);
}
