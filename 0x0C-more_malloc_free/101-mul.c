#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a string contains only digits.
 * @argv: pointer to the string to check
 * Return: 1 if not all digits, 0 if all digits
 */
int _isdigit(char *argv[])
{
	int k = 0;

	while (argv[k])
	{
		int i = 0;
		while (argv[k][i])
		{
			if (!(argv[k][i] >= '0' && argv[k][i] <= '9'))
				return (1); /* Return 1 if a non-digit character is found */
			i++;
		}
		k++;
	}
	return (0); /* Return 0 if all characters are digits */
}

/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 * Return: 0 for success, 1 for an error
 */
int main(int argc, char *argv[])
{
	int k;

	if (argc != 3)
	{
		printf("Error: Please provide exactly two arguments.\n");
		return (1); /* Return an error code */
	}

	for (k = 1; k < argc; k++)
	{
		if (_isdigit(argv))
		{
			printf("Error: Argument %d is not a valid digit.\n", k);
			return (1); /* Return an error code */
		}
	}

	/* Perform your desired operations here if needed */

	return (0); /* Return 0 for success */
}

