#include "main.h"
#include <stdlib.h>
/**
 * str_concat -function that returns a pointer to a
 * 2 dimensional array of integers
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int x, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = i = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[i] != '\0')
		i++;
	conc = malloc(sizeof(char) * (x + i + 1));

	if (conc == NULL)
		return (NULL);
	x = i = 0;
	while (s1[x] != '\0')
	{
		conc[x] = s1[x];
		x++;
	}

	while (s2[i] != '\0')
	{
		conc[x] = s2[i];
		x++, i++;
	}
	conc[x] = '\0';
	return (conc);
}
