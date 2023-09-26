#include "lists.h"

/**
 * print_listint - is used to display all the elements in a linked list.
 * @h: represents the head of the list_
 *
 * Return: the total number of nodes in the list_
 */

size_t listint_len(const listint_t *h)
{
	size_t count_k = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_k++;
	}
	return (count_k);
}
