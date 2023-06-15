#include <stdio.h>

/**
 * main - Programming is size of various types on the compute
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
char a;
long int a;
long long int a;
float a;
printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of int: %zu byte(s)\n", sizeof(int));
printf("Size of long: %zu byte(s)\n", sizeof(long int));
printf("Size of long long: %zu byte(s)\n", sizeof(long long int));
printf("Size of float: %zu byte(s)\n", sizeof(float));
return (0);
}
