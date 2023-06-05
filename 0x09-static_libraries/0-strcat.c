#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int n;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[x] = src[n];
		x++;
		n++;
	}

	dest[x] = '\0';
	return (dest);
}
