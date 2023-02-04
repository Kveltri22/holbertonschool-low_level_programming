#include "main.h"
#include <stdio.h>
/**
* print_squar - print a square
* @size: size of square
* Return: int size
*/

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar ('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
	{
		_putchar('#');
		x++;
	}
		_putchar('\n');
		y++;
	}
}
