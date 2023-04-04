#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: head node’s data (n),if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *w;
	int e;

	if (!head || !*head)
		return (0);

	e = (*head)->n;
	w = (*head)->next;
	free(*head);
	*head = w;

	return (e);
}
