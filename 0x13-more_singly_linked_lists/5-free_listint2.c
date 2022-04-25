#include "lists.h"

/**
 * free_listint2 - function that frees listint_t list
 *
 * @head: pointer to the first node
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}

		*head = NULL;
	}
}
