#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *w;

	while (head)
	{
		w = head->next;
		free(head);
		head = w;
	}
}
