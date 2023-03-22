#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name.
 * @name: string
 * @f: pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == '\0' || f == '\0')
		return;

	f(name);
}
