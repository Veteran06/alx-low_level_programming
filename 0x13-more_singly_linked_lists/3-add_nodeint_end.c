#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to first element
 * @n: data to insert
 * Return: Pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *e = *head;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);
	w->n = n;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}
	while (e->next)
		e = e->next;

	e->next = w;

	return (w);
}
