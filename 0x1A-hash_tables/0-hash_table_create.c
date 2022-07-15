#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: The size of the array
  *
  * Return: The created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_t = malloc(sizeof(hash_table_t));

	/*Check if new_t was created succesfully */
	if (new_t == NULL || size <= 0)
		return (NULL);

	/* Initialize array to null */
	new_t->array = malloc(sizeof(void *) * size);
	if (new_t->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;

	new_t->size = size;

	return (new_t);
}
