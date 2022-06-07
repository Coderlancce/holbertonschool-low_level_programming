#include "hash_tables.h"

/**
 * shash_table_create - create a new hash table how PHP create that
 * @size: size of the hash table
 *
 * Return: null on frailure, or new_table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	shash_node_t **array;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (!array)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = NULL;

	new_table->array = array;
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * add_nde_shash - add a node in the list
 * @ht: doble pointer to begining list
 * @key: key of the shash
 * @value: value to store in the table
 *
 * Return: pointer table with the created node, NULL on frailure
 */

shash_node_t *add_nde_shash(shash_node_t **ht,
			    const char *key,
			    const char *value)
{
	shash_node_t *tmp;

	tmp = *ht;

	for (; tmp; tmp = tmp->next)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
	}

	tmp = malloc(sizeof(shash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *ht;

	*ht = tmp;

	return (tmp);
}

/**
 * add_ind_shash - add a node in the sublis hash table
 * @ht: pointer to hash table
 * @new: pointer to node add
 *
 * Return: none
 */

void add_ind_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp1, *tmp2;
	int ret;

	tmp1 = tmp2 = ht->shead;

	for (; tmp1; tmp2 = tmp1, tmp1 = tmp1->snext)
	{
		ret = strcmp(new->key, tmp1->key);
		if (ret == 0)
			return;

		else if (ret < 0)
		{
			new->sprev = tmp1->sprev;

			if (tmp1->sprev)
				tmp1->sprev->snext = new;
			else
				ht->shead = new;

			tmp1->sprev = new;
			new->snext = tmp1;

			return;
		}
	}
	new->sprev = tmp2;
	new->snext = NULL;

	if (ht->shead)
		tmp2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}


/**
 * shash_table_set - add a hash to given shash table
 * @ht: porinter to hash table
 * @key: keyof the hash table
 * @value: value to store in the table
 *
 * Return: 1 in success, 0 on frailure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int kkey_index;
	shash_node_t *new;

	if (!ht || !key || !*key)
		return (0);

	kkey_index = key_index((unsigned char *)key, ht->size);

	new = add_nde_shash(&(ht->array[kkey_index]), key, value);
	if (!new)
		return (0);

	add_ind_shash(ht, new);

	return (1);
}

/**
 * shash_table_print - print the hash table
 * @ht: pointer to hash table
 *
 * Return: none
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (!ht)
		return;

	printf("{");
	sep = "";

	tmp = ht->shead;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys and values of the shash table in rev
 * @ht: pointer to hash table
 *
 * Return: none
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (!ht)
		return;

	printf("{");
	sep = "";

	tmp = ht->stail;

	for (; tmp; tmp = tmp->sprev)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 * @ht: pointer to hash table
 *
 * Return: none
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp;
	shash_node_t *current;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while ((current = tmp))
		{
			tmp = tmp->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
