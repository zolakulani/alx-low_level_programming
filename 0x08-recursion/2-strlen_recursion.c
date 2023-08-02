#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(str + 1));
	}
}
