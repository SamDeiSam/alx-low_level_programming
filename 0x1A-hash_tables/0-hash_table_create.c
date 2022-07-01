#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table
 * @size: size of the array of the hash table
 *
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!htable)
		return (NULL);

	htable->size = size;
	htable->array = calloc((size_t)htable->size, sizeof(hash_node_t *));
	if (htable->array == NULL)
		return (NULL);

	return (htable);
}
