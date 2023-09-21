#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all of a connected list's elements
 * @h: printing a pointer to the list_t list
 *
 * Return: Give the total amount of printed nodes
 */

size_t print_list(const list_t *h)
{
	size_t no_desc = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		no_desc++;
	}

	return (no_desc);
}
