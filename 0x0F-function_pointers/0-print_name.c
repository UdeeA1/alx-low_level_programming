#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: paramter for the function pointer
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	(*f)(name);
}
