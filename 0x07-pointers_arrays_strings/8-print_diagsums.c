#include "main.h"

/**
  * print_diagsums - prints sum of 2 diagonals of a square matrix
  * @a: pointer to the array;
  * @size: size of array
  *
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int row;
	int diag1 = 0, diag2 = 0;

	for (row = 0; row < size; row++)
	{
		diag1 += a[(size * row) + row];
		diag2 += a[(size * (row + 1)) - (row + 1)];
	}
	printf("%d, %d\n", diag1, diag2);
}
