#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times
 */

void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (k = 1 ; k <= i ; k++)
			{
				if (k < i)
					_putchar(' ');
				else if (k == i)
					_putchar(92);
			}
			_putchar('\n');
		}
	}
}
