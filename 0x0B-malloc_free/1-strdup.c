#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that concatenates two strings
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *abc;
	int x, n = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	abc = malloc(sizeof(char) * (x + 1));

	if (abc == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		aaa[n] = str[n];

	return (abc);
}
