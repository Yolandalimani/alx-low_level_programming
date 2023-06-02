#include "lists.h"

/**
 *free_list - function that frees a list
 *@head: A pointer
 *
 */

void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
