#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  kuma the lenght of a list
 * @h: komba to the list_t list
 *
 * Return: nhlayo of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t no_desc = 0;

	while (h != NULL)
	{
		h = h->next;
		no_desc++;
	}
	return (no_desc);
}
