#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * string_nconcat - Concatenates n bytes of a string to another string
 * @s1: append to
 * @s2: concatenate from
 * @n: # of bytes from s2 add s1
 *
 * Return: Pointer combined string that results NULL if unsuccessful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	unsigned int concatLength;
	char *s;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	concatLength = len1 + (n < len2 ? n : len2);

	s = malloc(sizeof(char) * (concatLength + 1));

	if (!s)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (i = 0; n < len2 && i < n; i++)
		s[len1 + i] = s2[i];

	for (j = 0; n >= len2 && j < len2; j++)
		s[len1 + j] = s2[j];

	s[concatLength] = '\0';

	return (s);
}
