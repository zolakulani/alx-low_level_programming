#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i, sum = 0;

	printf("argc or ac = %d\n", ac);
	printf("argv content is argv[]\n");

	for (i = 1; i < ac; i++)
	{
		printf("argv[%d] = %s\n", i, av[i]);
		sum += atoi(av[i]); 
	}
	printf("sum = %d\n", sum);

	return (0);
}
