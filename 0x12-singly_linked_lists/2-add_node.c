#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node beginning of list_t
 * @head: pointer
 * @str: string
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	while (str[len] != '\0')
	{
		len++;
	}
	newNode->len = len;
	if (*head != NULL)
		newNode->next = *head;
	if (*head == NULL)
		newNode->next = NULL;
	*head = newNode;
	return (*head);
}
