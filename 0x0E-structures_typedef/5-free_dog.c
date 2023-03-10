#include "dog.h"
/**
*free_dog - prototype
*@d: variable
*Return: 0
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
