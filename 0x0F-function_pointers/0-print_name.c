#include "function_pointers.h"

/**
 * print_name - name of the function pointer
 * @name: name to be printed
 * @f: function print
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
