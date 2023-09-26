#include "lists.h"

/**
 * print_listint - is used to display all the elements in a linked list.
 * @h: represents the head of the list_
 *
 * Return: the total number of nodes in the list_
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp_k = h;
	size_t count_k = 0;

	while (temp_k != NULL)
	{
		printf("%i\n", temp_k->n);
		count_k++;
		temp_k = temp_k->next;
	}
	return (count_k);
}