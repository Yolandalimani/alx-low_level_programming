#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int p = 0, r = 0, x = 0, i = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[i])
		i++;

	if (n < x)
		s = malloc(sizeof(char) * (x + n + 1));
	else
		s = malloc(sizeof(char) * (x + i + 1));

	if (!s)
		return (NULL);

	while (p < x)
	{
		s[p] = s1[p];
		p++;
	}

	while (n < i && p < (x + n))
		s[p++] = s2[r++];

	while (n >= i && p < (x + i))
		s[p++] = s2[r++];

	s[p] = '\0';

	return (s);
}
