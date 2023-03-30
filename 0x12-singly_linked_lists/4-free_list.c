#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list that enters to the function
 */
void free_list(list_t *head)
{
	list_t *w;

	w = head;
	while (w != NULL)
	{
		free(w->str);
		free(w);
		w = w->next;
	}
}
