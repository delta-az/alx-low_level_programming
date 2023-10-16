#include "main.h"
/**
  * _strcmp - a function that compares two strings
  * @s1: a pointer to the first string
  * @s2: a pointer to the second string
  * Return: integer
  */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = (int)*s1 - (int)*s2;
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
		cmp = (int)*s1 - (int)*s2;
	}
	return (cmp);
}
