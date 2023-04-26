#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: times table to be printed, 0 <= n <= 15
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, res;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (j == 0)
				printf("%d", res);
			else if (res < 10)
				printf(",   %d", res);
			else if (res < 100)
				printf(",  %d", res);
			else
				printf(", %d", res);
		}
		printf("\n");
	}
}
