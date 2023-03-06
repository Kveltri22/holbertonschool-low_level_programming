#include "function_pointers.h"

/**
*array_iterator - prototype
*@array: variable
*@size: variable
*@action: variable
*Return: 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
