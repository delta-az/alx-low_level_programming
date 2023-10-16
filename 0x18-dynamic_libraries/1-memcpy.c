#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer to to memory area dest
 * @src: a pointer to to memory area src
 * @n:number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
