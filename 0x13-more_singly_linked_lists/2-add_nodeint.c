#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a listint_t list.
 * @head: Pointer to the list's head's pointer.
 * @n: The new node's value to be inserted.
 *
 * Return: The new element's address, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nk;

	new_nk = malloc(sizeof(listint_t));
	if (new_nk == NULL)
		return (NULL);

	new_nk->n = n;
	new_nk->next = *head;
	*head = new_nk;

	return (new_nk);
}
