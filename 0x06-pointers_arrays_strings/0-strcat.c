#include "main.h"

/**
* _strcat - Concatenate
* @dest: Destination
* @src: src String
* Return: Final String
*/
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != 0)

	{
		a++;
	}
		while (src[b] != 0)
	{
		dest[a + b] = src[b];
		b++;
	}
		dest[a + b] = 0;
		return (dest);
}
