#include <stdio.h>
#include "lists.h"

/**
 * print_list - pri_nts all the elements of a linked list
 * @h: pointer to th_e list_t list to print
 *
 * Return: the num_ber of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t c_nt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		c_nt++;
	}

	return (c_nt);
}
