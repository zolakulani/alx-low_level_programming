#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
	if (s == NULL)
		return; /* Handle NULL pointer input */

	/* Find the length of the string */
	int length = 0;
	while (s[length] != '\0')
		length++;

	/* Print the string in reverse */
	for (int i = length - 1; i >= 0; i--)
		printf("%c", s[i]);

	/* Print a new line */
	printf("\n");
}
