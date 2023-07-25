#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	/* Print the string in reverse order */
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	/* Print a new line after the reversed string */
	_putchar('\n');
}
