#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - uses malloc to allocate memory for an array
 * @nmemb: how many itemsare in the array
 * @size: each element's size
 * Return: identifier for the reserved memory
 * If nmemb, size, or malloc fail, or if NULL is returned
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
