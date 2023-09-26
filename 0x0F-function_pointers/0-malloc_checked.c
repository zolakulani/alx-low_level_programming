#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints_name using the provided function
 * @name: name of the_person
 * @f: pointer to_a_function that prints the name
 *
 * Return: Nothing at all.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
