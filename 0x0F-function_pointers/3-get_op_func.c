#include "3-calc.h"

/**
* get_op_func - function pointer to select the correct function
* Ability to perform the requested operation
* @s: User-specified operator
* Return value: pointer to the corresponding function
* Operator specified as a parameter
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int l = 0;

	while (ops[l].p)
	{
		if (strcmp(ops[l].op, s) == 0)
			return (ops[l].f);
		l++;
	}

	return (NULL);
}
