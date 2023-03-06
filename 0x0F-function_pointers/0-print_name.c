#include "function_pointers.h"

/**
*print_name - prototype
*@name: variable
*@f: variable
*Return: 0
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
