#include "main.h"
/**
* malloc_checked - return 98 if fails
* @b: input
* Return: 98
*/
void *malloc_checked(unsigned int b)
{
	void *frog = malloc(b);

	if (frog == NULL)
	{
		free(frog);
		exit(98);
	}
	return (frog);
}
