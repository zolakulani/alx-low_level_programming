#include "main.h"

/**
 * _putchar - custom putchar function (not shown here, assumed to be defined)
 */

/**
 * puts2 - prints every other character of a string
 * @str: the input string
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i % 2 == 0) // Print every other character (even-indexed characters)
        {
            _putchar(str[i]);
        }
        i++;
    }

    _putchar('\n'); // Print a newline after printing the characters
}
