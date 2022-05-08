#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory to be reallocated
 * @old_size: the size of the memory to be reallocated
 * @new_size: the memory size to be newly allocated
 *
 * Return: pointer to newly allocated memory on success or else NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	temp = malloc(new_size);
	if (temp == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (temp);
	min_size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < min_size; ++i)
	{
		temp[i] = ptr[i];
	}
	free(ptr);
	return (temp);
}
