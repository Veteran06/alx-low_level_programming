#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node 
 * @index: index of node
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int e = 0;
	listint_t *w = head;

	while (w && e < index)
	{
		w = w->next;
		e++;
	}
	return (w ? w : NULL);
}
