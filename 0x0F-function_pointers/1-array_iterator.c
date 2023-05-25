#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates an array
 * @array: is an array
 * @size: elements to print
 * @action: pointers to print
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
