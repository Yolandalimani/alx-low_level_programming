#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *a, *b;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(a);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	a->str = dup;
	a->len = len;
	a->next = NULL;

	if (*head == NULL)
		*head = a;
	else
	{
		b = *head;
		while (b->next != NULL)
			b = b->next;
		b->next = a;
	}
	return (*head);
}
