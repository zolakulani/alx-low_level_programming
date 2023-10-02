#include "main.h"

/**
 * get_bit - returns the value of a bit at a given info.
 * @n: unsigned long integer info.
 * @index: indicator of the bit.
 *
 * Return: value of the bit, 0 if n is 0 and index < 64,
 * or -1 if index is out of bounds.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= 64)
		return (-1);

	if (n == 0 && index < 64)
		return (0);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
