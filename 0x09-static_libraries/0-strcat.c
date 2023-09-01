#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string, where the src will be appended.
 * @src: The source string, which will be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the destination string */
	while (*ptr != '\0')
		ptr++;

	/* Append the source string to the destination string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add a null terminator at the end */
	*ptr = '\0';

	return (dest);
}
