#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers.
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0;

	/* Calculate the sum of the main diagonal (from top-left to bottom-right) */
	for (i = 0; i < size; i++)
		sum_diag1 += a[(size + 1) * i];

	for (i = 0; i < size; i++)
		sum_diag2 += a[(size - 1) * (i + 1)];

	printf("Sum of main diagonal: %d\n", sum_diag1);
	printf("Sum of secondary diagonal: %d\n", sum_diag2);
}
