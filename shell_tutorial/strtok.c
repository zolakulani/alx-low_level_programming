#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char str[] = "Function braeks a string into sequence zero or more nonempty tokens";
    char delim[] = " ";
    char *trunks;

    trunks = strtok(str, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    trunks = strtok(NULL, delim);
    printf("%s\n", trunks);

    //trunks = strtok(NULL, delim);

    if (trunks == NULL)
        printf("The last part is NULL\n");

    else
        printf("The last part is not NULL\n");



    return (0);
}
