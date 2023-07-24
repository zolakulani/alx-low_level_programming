#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str)
		{
			_putchar(*str); /* Assuming _putchar is already defined elsewhere */
			str++;
		}
		_putchar('\n'); /* Print a new line after printing the string */
	}
}
