#include "main.h"

/**
* _strlen - return the legnth of a string
* @s: pointer to the character
* Return: String legnth
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
