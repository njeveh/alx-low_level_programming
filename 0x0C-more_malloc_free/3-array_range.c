#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *array_range - creates an array of integers
 * @min: the minimum value to be included in the array
 * @max: the maximum value to be included in the array
 *
 * Return: pointer to the created array on success, else NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);
	size = 1 + (max - min);
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = min;
		++min;
		++i;
	}
	return (ptr);
}
