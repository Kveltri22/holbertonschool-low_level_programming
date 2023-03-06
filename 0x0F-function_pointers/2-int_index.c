#include "function_pointers.h"

/**
*int_index - prototype
*@array: variable
*@size: variable
*@cmp: variable
*Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size <= 0)
			return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
