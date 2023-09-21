#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> 

/**
 * struct list_s - S_ingly l_inked l_ist
 * @str: string - _malloc'ed string_
 * @len: l_ength of the s_tring
 * @next: p_oints to the n_ext node
 *
 * Description: s_ingly l_inked l_ist n_ode s_tructure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);

#endif
