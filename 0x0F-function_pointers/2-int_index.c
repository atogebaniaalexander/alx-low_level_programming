#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array parameter
 * @size: size of array
 * @cmp: pointer to function
 * Return: int value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) == 1)
				return (i);
			i++;
		}
	}

	return (-1);
}
