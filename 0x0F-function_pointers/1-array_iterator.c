#include <stddef.h>

/**
 * array_iterator - a_ function that executes a given function
 * as a parameter on_each element oarray
 * @array: array iterate
 * @size: size of array
 * @action: pointer_to function to call
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ind_x;

	if (array != NULL && size > 0 && action != NULL)
		for (ind_x = 0; ind_x < size; ind_x++)
			action(array[ind_x]);
}
