#include <stdio.h>

/**
* main - Prints numbers from 0 to 9, followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
