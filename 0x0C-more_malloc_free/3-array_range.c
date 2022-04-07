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
	int size, i;
	int *ptr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = min;
		++i;
		++min;
	}
	return (ptr);
}
