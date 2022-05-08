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
	char *temp;
	unsigned int char_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	char_size = nmemb * size;
	ptr = malloc(char_size);
	if (ptr == NULL)
		return (NULL);
	temp = (char *)ptr;
	for (i = 0; i < char_size; ++i)
	{
		temp[i] = 0;
	}
	return (ptr);
}
