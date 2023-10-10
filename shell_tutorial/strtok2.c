#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "Function breaks a string into sequence zero or more nonempty tokens";
    char delim[] = " ";
    char *trunks;

    trunks = strtok(str, delim);
    while (trunks != NULL)
    {
        printf("%s\n", trunks);
	trunks = strtok(NULL, delim);
    }

    return (0);
}
