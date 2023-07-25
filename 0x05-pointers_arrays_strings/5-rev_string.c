/* main.h (assumed to contain the function prototype for _putchar) */

/* Function to print every other character of a string */
void puts2(char *str);


/* main.c */

#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i % 2 == 0) /* Print every other character (even-indexed characters) */
        {
            _putchar(str[i]);
        }
        i++;
    }

    _putchar('\n'); /* Print a newline after printing the characters */
}

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
