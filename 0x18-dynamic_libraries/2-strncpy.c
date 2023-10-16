#include "main.h"

/**
  * _strncpy - a fonction similar to strncpy
  * @dest: a pointer to dest string
  * @src: a pointer to src string
  * @n: number of bytes to be used
  * Return: a pointer to the resulting string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
	return (dest);
}
