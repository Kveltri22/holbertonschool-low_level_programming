#include <stdio.h>

/**
 * main - write a program that prints all arguments received.
 * @argc: size of argv
 * @argv: name of app
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
