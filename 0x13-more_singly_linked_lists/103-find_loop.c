#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: linked list to search
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *w = head;
	listint_t *e = head;

	if (!head)
		return (NULL);

	while (w && e && e->next)
	{
		e = e->next->next;
		w = w->next;
		if (e == w)
		{
			w = head;
			while (w != fast)
			{
				w = w w->next;
				e = e->next;
			}
			return (e);
		}
	}
	return (NULL);
}
