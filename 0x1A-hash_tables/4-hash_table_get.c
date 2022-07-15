#include "hash_tables.h"

/**
  * hash_table_get - Retrieves a value associated by a key
  * @ht: The hash table to retrieve values from
  * @key: The key to look for
  *
  * Return: The value associated with the key NULL if none
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
