#include "main.h"
/**
 * set_bit - Sets the bit at the given inde_x to 1.
 * @n: The unsigne_d long int to set the bit in.
 * @index: The inde_x of the bit to set.
 *
 * Return: 1 if the bit was set success_fully, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1 << index);

	return (1);
}
