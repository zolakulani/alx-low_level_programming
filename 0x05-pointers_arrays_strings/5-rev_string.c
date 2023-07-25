/* Assuming main.h contains the proper function prototype for _putchar */
#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
    if (s == NULL)
        return;

    char *start = s;
    char *end = s;

    // Find the end of the string
    while (*end != '\0')
    {
        end++;
    }
    end--;

    // Swap characters from start and end until they meet in the middle
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

/* Custom implementation of _putchar to print characters */
int _putchar(char c)
{
    /* Replace this line with your code to write a character to the output */
    /* For example, you could use low-level OS-specific functions to output the character */
    return 1; /* Return 1 to indicate success */
}

/* Custom implementation of main */
int main(void)
{
    char s[10] = "My School";

    /* Output the initial string using _putchar */
    int i = 0;
    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
    _putchar('\n');

    /* Reverse the string */
    rev_string(s);

    /* Output the reversed string using _putchar */
    i = 0;
    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
    _putchar('\n');

    return 0;
}
