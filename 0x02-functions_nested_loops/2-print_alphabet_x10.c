#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
 */
void print_alphabet_x10(void)
{
    char letter;
    int newLine;

    for (newLine = 0; newLine < 10; newLine++)
    {
        for (letter = 'a'; letter <= 'z'; letter++)
        {
            _putchar(letter);
        }
        _putchar('\n');
    }
}
