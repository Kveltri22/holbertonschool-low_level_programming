#include "main.h"

/**
 * _strchr - Character in string
 * @s: String
 * @c: char
 * Return: pointer to char*
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	if (c == '\0')
		return ((s + i));
	return (0);
}
