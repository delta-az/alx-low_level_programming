#include <stdio.h>

/**
 * main - Programming is size of various types on the compute
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;
printf("Size of char: %zu byte(s)\n", sizeof(b)(char));
printf("Size of int: %zu byte(s)\n", sizeof(a)(int));
printf("Size of long: %zu byte(s)\n", sizeof(c)(long int));
printf("Size of long long: %zu byte(s)\n", sizeof(d)(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(e)(float));
return (0);
}
