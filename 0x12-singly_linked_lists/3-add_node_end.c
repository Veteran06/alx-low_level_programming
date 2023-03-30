#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: head of linked list
 * @str: string to store in link
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t w;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (w = 0; str[w]; w++)
		;

	new->len = w;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
