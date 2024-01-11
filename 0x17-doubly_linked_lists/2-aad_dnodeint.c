#include "lists.h"

/** 
 * add_dnodeint - Inserts a new node at the start of a list called dlistint_t.
 * @head: A reference to the dlistint_t list head.
 * @n: The integer that will be stored in the new node.
 *
 * Return: NULL in the event that the function fails; else, the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}