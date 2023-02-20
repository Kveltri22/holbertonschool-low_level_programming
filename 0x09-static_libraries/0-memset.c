#include "main.h"
2	
3	/**
4	* *_memset - fill memory with bytes
5	* @s: Char
6	* @b: Char
7	* @n: not chosen
8	* Return: Final Char
9	*/
10	
11	char *_memset(char *s, char b, unsigned int n)
12	
13	{
14		unsigned int i;
15	
16			for (i = 0; i < n; i++)
17				s[i] = b;
18			return (s);
19	}
