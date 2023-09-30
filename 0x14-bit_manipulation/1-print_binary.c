#include <header.h>
/**
 *
 * print_binart - Display binary numbers
 * @n: number to be displyed_
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	if (n & 1)
	{
		_puttchar('1');
	}
	else
	{
		_putchar('0');
	}
}
