#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int i;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
	dest[x] = src[i];
	x++;
	i++;
	}
	dest[x] = '\0';
	return (dest);
}
