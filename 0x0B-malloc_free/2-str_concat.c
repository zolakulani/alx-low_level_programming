#include <stdio.h>
#include <stdlib.h>

/**
 * str_length - Calculates the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int str_length(char *str)
{
	int n = 0, i;

	for (i = 0; str[i]; i++)
		n++;

	return (n);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the concatenated string (dest).
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL if allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = str_length(s1) + str_length(s2) + 1;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	_strcat(ptr, s1);
	_strcat(ptr, s2);
	return (ptr);
}
