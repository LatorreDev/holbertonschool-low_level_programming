#include "hash_tables.h"
/**
* hash_table_create - a function that create a hash table
* @size: entry argument
* Return: pointer to a hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		return (NULL);
	}
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	return (new_hash);
}
