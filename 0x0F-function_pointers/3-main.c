#include "3-calc.h"

/**
 * main - a program that runs basic operations
 * @argc: adds the number of arguments
 * @argv: an array pointer to an arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char driver;
	int numi, numii, result_in;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numi = atoi(argv[1]);
	numii = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	driver = *argv[2];

	if ((driver == '/' || driver == '%') && numii == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result_in = func(numi, numii);

	printf("%d\n", result_in);

	return (0);
}
