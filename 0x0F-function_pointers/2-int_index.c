#include "function_pointers.h"

/**
 * int_index - finds an integer
 * @array : array to be searched
 * @size : arraysize
 * @cmp :pointer
 *
 * Return : index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
