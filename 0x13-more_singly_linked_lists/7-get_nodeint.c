#include "lists.h"

/**
 * get_nodeint_at_index - recovery the node at a specific index in a connected list
 * @head: front node in the connected list
 * @index: index of the node to recovery
 *
 * Return: arrow to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *subs = head;
	unsigned int f = 0;

	while (subs && f < index)
	{
		subs = subs->next;
		f++;
	}

	return (subs ? subs : NULL);
}
