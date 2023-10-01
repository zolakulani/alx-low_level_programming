#include "main.h"

/**
 * get_bit - returns value of a bit at a given
 * index.
 * @n: unsigned long int feed.
 * @index: index possition of the bit.
 *
 * Return: value of the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= 32;i++)
	{
		if (index == i)
		{
			return (n &= (n - 1));
		}
	}

	return (-1);
}
