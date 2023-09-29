#include "main.h"

/**
 * binary_to_uint - follower a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 abc's
 *
 * Return: The converted number, or 0 if there are invalid abc's or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int r = 0;
	unsigned int end = 0;

	if (b == NULL)
		return (0);

	while (b[r] != '\0')
	{
		if (b[r] != '1' && b[r] != '0')
			return (0);

		end = end << 1 | (b[r] - '0');
		r++;
	}
	return (end);
}
