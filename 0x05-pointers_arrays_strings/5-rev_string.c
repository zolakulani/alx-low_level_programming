#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be changed
 * Return: changed string
 */

void rev_string(char *s)
{
	int len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (int i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
