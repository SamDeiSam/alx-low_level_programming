#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_tlinked list
 * @head: pointer to the first element in the linked list
 *
 * Return: head note data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int top_node;

	if (!head || !*head)
		return (0);

	top_node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	
	return (top_node);
}
