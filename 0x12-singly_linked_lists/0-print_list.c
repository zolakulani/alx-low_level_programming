#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all of a c_onnected list's elements
 * @h: printing a pointer to the l_ist_t list
 *
 * Return: Give the total amount of p_rinted nodes
 */

size_t print_list(const list_t *h)
{
	size_t no_desc;
	no_desc = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		no_desc++;
	}

	return (no_desc);
}
