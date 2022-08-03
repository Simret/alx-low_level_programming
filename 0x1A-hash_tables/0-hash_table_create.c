#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size:  size of the table
 * Return: the position memory where is stored the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(unsigned long int));
	return (hash_table);
}
