#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the first node
 * @index: index of the node
 * Return: 1 on success, or -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *w = *head;
	listint_t *current = NULL;
	unsigned int e = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(w);
		return (1);
	}
	while (e < index - 1)
	{
		if (!w || !(w->next))
			return (-1);
		w = w->next;
		e++;
	}

	current = w->next;
	w->next = current->next;
	free(current);

	return (1);
}
