#include "lists.h"

/**
 *  listint_len - is to determine the count of nodes in a linked list
 * @h: represents the head of the list_
 *
 * Return: the total number of nodes in the list_
 */

size_t listint_len(const listint_t *h)
{
        const listint_t *temp_k = h;
        size_t count_k = 0;

        while (temp_k != NULL)
        {
                count_k++;
                temp_k = temp_k->next;
        }
        return (count_k);
}
