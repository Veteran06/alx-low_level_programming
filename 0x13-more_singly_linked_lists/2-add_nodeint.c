#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to first node
 * @n: data to insert
 * Return: pointer to new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *w;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);
	w->n = n;
	w->next = *head;
	*head = w;

	return (w);
}
