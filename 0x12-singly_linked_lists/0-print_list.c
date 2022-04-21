#include <stdio.h>
#include "lists.h"

/**
 * print_list - function prints all the elements of link_t list
 * @h: pointer to all the elements of linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	whie (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
