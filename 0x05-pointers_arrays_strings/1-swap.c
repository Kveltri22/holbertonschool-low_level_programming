#include "main.h"

/**
* swap_int - swap the value of the integers
* @a: value of integer
* @b: value of integer
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
