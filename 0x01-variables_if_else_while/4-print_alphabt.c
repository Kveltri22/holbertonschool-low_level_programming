#include <stdio.h>
/**
* Main - print the alphabe in lowercase only use putchar
* Return: Alway 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
	{

	if ((c == 'q' || c == 'e') != 1)
	{
		putchar(c);
	}
	}
	putchar ('\n');
	return (0);
}
