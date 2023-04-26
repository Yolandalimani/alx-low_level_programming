#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table
 * @n: times table to be printed, 0 <= n <= 15
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, res;

	for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 100; j++)
		{
			res = i * j;
			printf("%d ", res);
		}
		printf("\n");
	}
}

