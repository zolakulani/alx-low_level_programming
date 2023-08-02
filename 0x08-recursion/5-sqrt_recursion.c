#include "main.h"

/**
 * _sqrt_recursive - Helper function to calculate the square root recursively.
 *
 * @n: The number whose square root needs to be calculated.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (_sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 *
 * @n: The number whose square root needs to be calculated.
 *
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursive(n, 0));
}
