#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: first node
 * Return:  returns the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *w = head;

	while (w)
	{
		sum += w->n;
		w = w->next;
	}
	return (sum);
}
