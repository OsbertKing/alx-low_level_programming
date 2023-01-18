#include "function_pointers.h"

/**
 * array_iterator - executes a given function
 * on an array
 * @array : array
 * @size : array size
 * @action : action on array
 * Return : nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

