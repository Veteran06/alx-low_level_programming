#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: index where new node is added
 * @n: data to insert
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int w;
	listint_t *new;
	listint_t *e = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if  (idx == 0)
	{new->next = *head;
	*head = new;
	return (new);
}
for (w = 0; e && w < idx; w++)
{
	if (w == idx - 1)
	{
		new->next = e->next;
		e->next = new;
		return (new);
	}
	else
		e = e->next;
}
return (NULL);
}
