#include "main.h"

/**
* _isdigit - check if digit or not
* @c: character
* Return: if digit return (1), if not (0)
*/

int _isdigit(int c)

{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
