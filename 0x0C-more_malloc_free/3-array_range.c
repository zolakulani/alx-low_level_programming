#include <stdlib.h>
#include "main.h"

/**
  *array_range - creates an array of integers.
  *@min: low threshold 
  *@max: high threshold
  *
  *Return: pointer to a fresh made array
  *if malloc fails, NULL
  *NULL if min > max.
  */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min + i;

	return (arr);
}
