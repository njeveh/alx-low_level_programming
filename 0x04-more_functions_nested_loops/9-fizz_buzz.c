#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 - 100
 * But for multiples of three it prints Fizz instead of the number
 * and for the multiples of five it prints Buzz.
 * For numbers which are multiples of both three and five it prints FizzBuzz
 *
 *Return: 0 upon completion
 */

int main(void)
{
	int i;

	for (i = 1; 1 <= 100; ++i)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf("\n");
	}
	return (0);
}
