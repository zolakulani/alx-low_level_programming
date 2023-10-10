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
    printf("%s\n", trunks);

    while ((trunks = strtok(NULL, delim)) != NULL)
    {
        printf("%s\n", trunks);
    }

    if (trunks == NULL)
    {
        printf("The last part is NULL\n");
    }
    else
    {
        printf("The last part is not NULL\n");
    }

    return (0);
}
