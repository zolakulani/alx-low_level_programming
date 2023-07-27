#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i;
	int is_word = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (is_word)
			{
				str[i] -= 32;
			}
			is_word = 0;
		}
		else
		{
			is_word = 1;
		}
	}

	return (str);
}
