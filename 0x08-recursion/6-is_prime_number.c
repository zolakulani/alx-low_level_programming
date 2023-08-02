#include "main.h"

/**
 * is_prime_number - Check if the input integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Not a prime number */

	/* Check for divisors from 2 to the square root of n */
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0); /* Not a prime number */
	}

	return (1); /* Prime number */
}
