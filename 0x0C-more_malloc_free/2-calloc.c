#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_calloc -  allocates memory for an array, using malloc
 * @nmemb: number of array members
 * @size: size of each array member
 *
 * Return: pointer to array on success, else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		ptr[i] = 0;
		++i;
	}
	return (ptr);
}
