#include "lists.h"

/**
 * add_nodeint - function that adds a new node.
 * @head: A pointer to the address.
 * @n : int for the new node.
 *
 * Return: NULL if the function fails,
 * otherwise the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
