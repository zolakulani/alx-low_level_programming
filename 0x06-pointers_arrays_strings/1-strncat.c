#include "main.h"

/**
 * _strncat - Concatenate two strings, limited to `n` bytes from `src`.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to concatenate.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Calculate the length of the destination string */
		while (dest[dest_len] != '\0')
		dest_len++;

	/* Concatenate `n` characters from `src` to `dest */
		for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	/* Null-terminate the destination string after concatenation */
		dest[dest_len + i] = '\0';

		return (dest);
}
