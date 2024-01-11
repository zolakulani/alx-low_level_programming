#include "lists.h"

/**
rint_dlistint - prints a dlistint_t list's whole contents..
 * @h: The head of the dlistint_t list.
 *
 * Return: How many nodes there are in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
	