#include <stdio.h>
#include <libgen.h>

/**
 * main - Produces a new line after printing the program's name.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", basename(argv[0]));

	return (0);
}
