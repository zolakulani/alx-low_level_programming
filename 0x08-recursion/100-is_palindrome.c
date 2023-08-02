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

	return (_is_palindrome(start + 1, end - 1));
}

/**
 * _strlen - Helper function to calculate the length of a string recursively.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	char *end = s + length - 1;

	if (*s == '\0') /* Handle NULL input. */
		return (0);

	return (_is_palindrome(s, end));
}
