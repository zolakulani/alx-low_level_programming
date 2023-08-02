/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of the number 'n'.
 *         If 'n' is less than 0, returns -1 to indicate an error.
 *         The factorial of 0 is defined to be 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
