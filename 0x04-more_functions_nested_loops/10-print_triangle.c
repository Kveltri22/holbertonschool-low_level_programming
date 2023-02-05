#include "main.h"
#include <stdio.h>
/**
* print_triangle - Function that prints a triangle, followed by a new line.
* @size: the int for the paramaters of my function
* Return: Always 0.
*/

void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;
	while (c < size)
	{
	i = size - 1 - c;
	j = c + 1;
	while (i > 0)
	{
		_putchar(' ');
		i--;
	}
	while (j > 0)
	{
		_putchar('#');
		j--;
	}
	_putchar('\n');
	c++;
	}
	if (size <= 0)
	_putchar('\n');
}
