#include "lists.h"

/**
 * dlistint_len - determines how many elements there are in a linked dlistint_t list.
 * @h: The dlistint_t list's head.
 *
 * Return: The dlistint_t list's length in elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
