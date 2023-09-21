#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - +s a new node at the end of a linked list
 * @head: double -> to the list_t list
 * @str: s_tring to put in the new node
 *
 * Return: +ress of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *t_emp = *head;
	unsigned int t = 0;

	while (str[t])
		t++;

	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = t;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (t_emp->next)
		t_emp = t_emp->next;

	t_emp->next = new_n;

	return (new_n);
}
