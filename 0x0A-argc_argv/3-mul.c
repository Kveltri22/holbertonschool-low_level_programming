#include <stdio.h>
#include <stdlib.h>

/**
 * main - mult 2 numbers
 * @argc: argument count
 * @argv: argument
 * Return: 0 succeed, 1 failure
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
