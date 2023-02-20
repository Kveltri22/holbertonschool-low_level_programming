#include "main.h"

/**
 * factorial - give the factorial a number
 * @n: char
 * Return: -1 if n is lower that 0. return 0 otherwise
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
