#include "main.h"
#include <stdio.h>

/**
* print_rev - print a string in revers followed by a new line
* @s: is the character
*/

void _puts(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}
	while (count--)
	{
	putchar(*(s + (count)));
	}
	putchar('\n');
}
