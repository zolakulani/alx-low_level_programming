#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	if (*s == '\0' || *accept == '\0')
		return ('\0');

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
				return (s);
			ptr++;
		}

		s++;
	}

	return ('\0'); /* Byte not found */
}
