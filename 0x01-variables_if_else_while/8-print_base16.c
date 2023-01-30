#include <stdio.h>

/**
* main - main - Prints all the numbers of base 16 in lowercase.
*
* Return: Always 0 (success)
*/

int main(void)
{
int n;
for (n = 48; n < 58; n++)
putchar(n);
for (n = 'a'; n <= 'f'; n++)
putchar(n);
putchar('\n');
return (0);
}
