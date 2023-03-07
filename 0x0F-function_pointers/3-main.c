#include "3-calc.h"
/**
*main - main function
*@argc: count the arguments
*@argv: value of the arguments
*Return: multiple things
*/

int main(int argc, char *argv[])
{
	int a, b;
	char *tator;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	tator = argv[2];
	operator = get_op_func(tator);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(tator, "/") == 0 || (strcmp(tator, "%")) == 0) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

		printf("%d\n", operator(a, b));
		return (0);
}
