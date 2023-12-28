#include "main.h"
/**
 *_strncat - a function that concatenates two strings
 * it will use at most n bytes from src
 * src dose not need to be null terminated
 * @src: a pointer to source string
 * @dest: a pointer to dest string
 * @n: number of bytes to take from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';
	return (dest);
}
