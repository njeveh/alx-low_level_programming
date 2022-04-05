#include "main.h"
#include "stdlib.h"
#include "stddef.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the number of array columns
 * @height: number of array rows
 *
 * Return: NULL on failure or if width or height is 0
 * pointer to the array on success
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int) * width * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height * width * sizeof(int); i += sizeof(int) * width)
	{
		for (j = 0; j < width; ++j)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
