#include "main.h"

/**
  * _strcat - a function that concatenates two strings
  * @src: a pointer to source string
  * @dest: a pointer to dest string
  * Return: the src string appending to the dest string
  */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = *src;
	return (dest);
}
