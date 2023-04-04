#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *w;

	if (head == NULL)
		return;

	while (*head)
	{
		w = (*head)->next;
		free(*head);
		*head = w;
	}
	*head = NULL;
}
