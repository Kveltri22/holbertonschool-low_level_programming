#include "variadic_functions.h"
/**
 *print_numbers - print numbers
 *@separator: separator variable
 *@n: variable
 *Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);
	while (i < n - 1)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("%d\n", va_arg(list, int));
}
