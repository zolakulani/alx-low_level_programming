#include "stdio.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = 0;
	char *start = s;
	char *end = s;

	if (s == '\0') /* Handle NULL input. */
		return (0);

	/* Find the end of the string. */
	while (*end != '\0')
	{
		end++;
		len++;
	}

	/* Compare characters from start and end to check for palindrome. */
	while (start < end)
	{
		if (*start != *end)
			return (0); /* Not a palindrome. */
		start++;
		end--;
	}

	return (1); /* Palindrome. */
}
