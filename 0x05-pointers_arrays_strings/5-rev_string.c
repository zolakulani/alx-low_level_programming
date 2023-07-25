#include "main.h"

/**
 * reverse_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void reverse_string(char *s)
{
	char *start = s;
	char *end = s;
	char tmp;

	/* Find the end of the string using the pointer 'end'. */
	while (*(end + 1) != '\0')
	{
		end++;
	}

	/* Swap characters using the two pointers 'start' and 'end'. */
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
