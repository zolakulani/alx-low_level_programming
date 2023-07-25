#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
    char *start = s;
    char *end = s;

    // Move the end pointer to the end of the string
    while (*end)
        end++;

    // Move the end pointer one step back to the last character
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
