#include "main.h"

/**
 * clear_bit - 0 is set as the value of a bit at a specific index.
 * @n:  a reference pointing to the integer that needs to be changed
 * @index: the index of the bit that needs to be cleared, starting at 0
 * Return: 1 if successful, or -1 if an error occurred_
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
