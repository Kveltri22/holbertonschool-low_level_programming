#include <stdio.h>
#include "main.h"

/**
* main - display name
* @argv: name of app
* @argc: size of argv
* Retrun: 0
*/

int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
