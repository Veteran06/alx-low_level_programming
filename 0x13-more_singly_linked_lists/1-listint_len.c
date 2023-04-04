#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: pointer
 * Return: numbert of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
