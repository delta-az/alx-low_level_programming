#include "main.h"

/**
 * _isupper  - checks for uppercase character
 * @c: The int of char to check
 * Return: 1 if the character is uppercase
 * or return 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
