#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data(n).
 * @head: A pointer to the head.
 *
 * Return: 0 if the list is empty.
 * otherwise the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
