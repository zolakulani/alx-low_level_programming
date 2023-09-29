#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1); // Right shift n by 1 bit and recursively print the rest
    putchar((n & 1) + '0'); // Print the least significant bit (LSB) as a character '0' or '1'
}
