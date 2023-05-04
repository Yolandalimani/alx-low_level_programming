#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; m[i] != '\0'; i++)
	{
		for (m = 0; j < 10; j++)
		{
			if (n[i] == s1[m])
			{
				n[i] = s2[m];
			}
		}
	}
	return (n);
}
