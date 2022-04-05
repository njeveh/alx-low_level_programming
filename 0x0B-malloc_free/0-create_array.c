#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: NULL if size = 0, else a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	else
		return (arr);
}