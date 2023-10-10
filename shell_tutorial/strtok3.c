#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "Function breaks a string into sequence zero or more nonempty tokens";
	char delim[] = " ";
	char *trunks;
	int i;

	printf("Length of the string: %lu\n", strlen(str));
	trunks = strtok(str, delim);
	while (trunks != NULL)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}


	for (i = 0; i < 67; i++)
	{	if (str[i] == '\0')
			printf("\\0");
		else
			printf("%c", str[i]);
	}

	return (0);
}
