#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The input string to be reversed and printed.
 */
void print_rev(char *s)
{
	if (s == NULL)
		return; /* Handle NULL pointer input */

	/* Calculate the length of the string */
	int length = 0;
	while (s[length] != '\0')
		length++;

	/* Print the string in reverse order */
	for (int i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	/* Print a new line after printing the reversed string */
	_putchar('\n');
}
