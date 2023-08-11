#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - uses malloc to allocate memory
 * @b: number of allocated bytes
 *
 * Return: a reference to the memory space allotted
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
