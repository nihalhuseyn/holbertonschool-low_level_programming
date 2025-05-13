#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: Name to print
 * @f: Function pointer used to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
