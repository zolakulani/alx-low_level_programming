#include "lists.h"

/**
 * add_nodeint_end- Adds a new node to the end of a
 * listint-t list with function.
 * @head is a pointer that points to the list's head.
 * @n: The number to be kept as the new node's integer value.
 * Return: The address of the new element, or NULL if the
 * operation was unsuccessful done
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nk, *temp_k;

	new_nk = malloc(sizeof(listint_t));
	if (new_nk == NULL)
		return (NULL);

	new_nk->n = n;
	new_nk->next = NULL;

	if (*head == NULL)
	{
		*head = new_nk;
		return (new_nk);
	}

	temp_k = *head;
	while (temp_k->next != NULL)
		temp_k = temp_k->next;

	temp_k->next = new_nk;

	return (new_nk);
}
