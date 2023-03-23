#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: array parameter
 * @size: struct size
 * @action: pointer to function
 * Return void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
