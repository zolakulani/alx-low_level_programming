int _putchar(char c);

/**
 * puts_half - Prints the second half of a string
 * @str: The string to print the second half of
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
		length++;

	start = length / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
