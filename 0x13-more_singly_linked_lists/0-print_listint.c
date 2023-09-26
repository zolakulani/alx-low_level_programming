#include "lists.h"

/**
 * print_listint - is used to display all the elements in a linked list
 * @h: represents the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp_k = h;
	size_t count_k = 0;

	while (temp_k != NULL)
	{
		printf("%d\n", temp_k->n);
		count_k += 1;
		temp_k = temp_k->next;
	}
	return (count_k);
}
