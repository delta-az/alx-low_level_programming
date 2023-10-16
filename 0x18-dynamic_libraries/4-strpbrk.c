#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: a pointer to the string to be searched
 * @accept: the bytes to search for
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return (0);
}
