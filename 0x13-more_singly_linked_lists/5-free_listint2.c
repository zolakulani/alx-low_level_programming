#include "lists.h"

/**
 * free_listint2 - the instruction to frees a linked list.
 * @head: A connection to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_k;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp_k = (*head)->next;
		free(*head);
		*head = temp_K;
	}

	*head = NULL;
}
