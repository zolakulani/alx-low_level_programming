#include "main.h"
#include <stdio.h>

/**
 * print_array - Print an array of integers
 * @a: An array of integers
 * @n: The number of elements to print
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * reverse_array - Reverse the order of elements in an array
 * @a: An array of integers
 * @n: The number of elements in the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		/* Swap the elements at indices 'start' and 'end' */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Move to the next pair of elements */
		start++;
		end--;
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int size = sizeof(a) / sizeof(int);

	print_array(a, size);
	reverse_array(a, size);
	print_array(a, size);

	return (0);
}
