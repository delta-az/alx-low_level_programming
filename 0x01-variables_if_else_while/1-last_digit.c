#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
		printf("Last digit of %d is greater than 5: the string and is greater than 5", n);
	else if ((n % 10) < 5)
		printf("Last digit of %d is 0: the string and is less than 6 and not 0", n);
	else
		printf("Last digit of %d is less than 6 and not 0:the string and is 0", n);
	printf("\n");
	/* your code goes there */
	return (0);
}
