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
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid =  (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
