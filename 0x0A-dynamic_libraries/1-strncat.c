#include "main.h"

/**
 * _strncat - hjk
 * @dest: pointer
 * @src: copy to desitnation
 * Return: a copy of src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
