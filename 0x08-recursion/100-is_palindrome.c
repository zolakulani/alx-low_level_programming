#include "main.h"

/**
 * _is_palindrome - Helper function to check if a string is a palindrome.
 * @start: Pointer to the start of the string.
 * @end: Pointer to the end of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1); /* Palindrome, as we have checked all characters. */

	if (*start != *end)
		return (0); /* Not a palindrome. */

	return (_is_palindrome(start + 1, end - 1)); /* Recursively check next characters. */
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0') /* Handle NULL input. */
		return (0);

	char *end = s;
	while (*end != '\0')
	{
		end++;
	}
	end--; /* Move end back to the last character of the string. */

	return (_is_palindrome(s, end));
}
