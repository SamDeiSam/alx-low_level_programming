#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node
 * of listint_t linked list
 * @head: pointer to first node
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
