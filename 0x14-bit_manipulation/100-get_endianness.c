#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: -1 if big-endian, and 1 if little-endian.
 */
int get_endianness(void)
{
	int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);
}
