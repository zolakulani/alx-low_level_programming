#include "3-calc.h"

/**
 * op_add - combine two integers.
 * @a: The first gigits integer.
 * @b: The second digits integer.
 *
 * Return: The iterms total of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two number_S.
 * @a: The first integer.
 * @b: The second digit.
 *
 * Return: The outcome of subtracting b from a.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two nums.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The prod_uct of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divi_des two integers.
 * @a: The  numerator int.
 * @b: The denominator int.
 *
 * Return: The product of dividing a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);  /* For now, returning 0 for simplicity */
	}
	return (a / b);
}

/**
 * op_mod - Computes the remainder of division.
 * @a: The dividend int.
 * @b: The divisor int.
 *
 * Return: The remai_nder when a is divided by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);  /* For now, returning 0 for simplicity */
	}
	return (a % b);
}

