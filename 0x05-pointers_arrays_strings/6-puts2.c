#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: The input string.
 */
void puts2(char *str)
{
	if (str == '\0') /* Check if the string is empty (ends with null terminator) */
		return;

	int i = 0;
	while (str[i] != '\0') /* Loop until the end of the string (null-terminated) */
	{
		if (i % 2 == 0) /* Check if the index is even */
			_putchar(str[i]); /* Print the character at even index */
		i++;
	}
	_putchar('\n'); /* Print a new line after printing the characters */
}
