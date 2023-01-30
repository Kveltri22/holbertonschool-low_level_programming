#include <stdio.h>

/**
* main: description code to print all signle digit numbers no char command
* Return: Always 0 (success)
*/

int main(void)
{
int n;
for (n = 0 ; n < 10 ; n++)

{
putchar(n + '0');
}
putchar('\n');
return (0);
}
