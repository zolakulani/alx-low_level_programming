#include "lists.h"
/**
 * get_nodeint_at_index - finds a given node in a linked list
 * @head : pointer to the head of the linked list
 * @index: index of the node to find (indices starting at 0)
 * Return: pointer to the desired node,
 *         or NULL - if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_k = head;
	unsigned int count_k = 0;

	while (temp_k != NULL)
	{
		if (count_k == index)
			return (tempt_k->n);

		count_k++;
		temp_k = temp_k->next;
	}

	if (n < index)
		return (NULL);

	return (NULL);
}
