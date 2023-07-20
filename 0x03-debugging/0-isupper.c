#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int is_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
/*Check if the character is within the ASCII range of uppercase letters*/
	{
		return 1; /* Character is uppercase */
	}
	else
	{
		return 0; /* Character is not uppercase */
	}
}
