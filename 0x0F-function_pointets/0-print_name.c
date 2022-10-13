#include "function_pointers.h"

/**
 * print_namr - print a name
 * @name : name to be printed
 * @f : function to be followed
 * Return : nothing
 */

void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
