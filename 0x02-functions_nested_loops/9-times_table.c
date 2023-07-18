#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            if (j == 0)
            {
                _putchar('0');  /* Print leading zero for single-digit numbers */
            }
            else if (product < 10)
            {
                _putchar(' ');  /* Add leading space for single-digit products */
                _putchar('0' + product);
            }
            else
            {
                _putchar('0' + (product / 10)); /* Print tens digit */
                _putchar('0' + (product % 10)); /* Print ones digit */
            }

            if (j != 9)
            {
                _putchar(','); /* Print comma except for the last element in a row */
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}

