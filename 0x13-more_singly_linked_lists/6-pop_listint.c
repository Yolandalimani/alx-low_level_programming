#include "lists.h"

/**
 * pop_listint - function that deletes the head node.
 * @head: A pointer to the address.
 *
 * Return: 0 if the linked list is empty,
 * otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (i);
}
