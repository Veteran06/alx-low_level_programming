#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer
 * Return: length
 */

size_t list_len(const list_t *h)
{
	unsigned int w = 0;

	while (h != NULL)
	{
		w++;
		h = h->next;
	}
	return (w);
}
