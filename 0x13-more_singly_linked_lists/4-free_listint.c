#include "lists.h"

/**
 * free_listint - the instruction to frees a linked list.
 * @head: A connection to the head of the list.
 */
void free_listint(listint_t *head)
{
    listint_t *temp_k;

    while (head != NULL)
    {
        temp_k = head->next;
        free(head);
	head = temp_k;
    }
}
