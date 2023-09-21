#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a l_inked list
 * @head: list_t l_ist to be freed
 */
void free_list(list_t *head)
{
	list_t *t_emp;

	while (head != NULL)
	{
		t_emp = head->next;
		free(head->str);
		free(head);
		head = t_emp;
	}
}
