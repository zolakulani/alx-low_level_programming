#include "lists.h"

/**
 * pop_listint - cut the main of a joined list
 * @head: Indication to the first item in the linked list
 *
 * Return: the info inside the item that was cutted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *subs;
	int dig;

	if (!head || !*head)
		return (0);

	dig = (*head)->n;
	subs = (*head)->next;
	free(*head);
	*head = subs;

	return (dig);
}
