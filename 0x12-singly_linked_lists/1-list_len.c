#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list_t list
 * @h: pointer to head
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t node_num = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		node_num++;
	}

	return (node_num);
}
