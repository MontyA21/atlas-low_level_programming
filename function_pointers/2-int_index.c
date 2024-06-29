#include "function_pointers.h"
/**
 * int_index - searches for an int
 * @size: number of elements in array
 * @array: array containing elements
 * @cmp: pointer to function used to compare values
 * Return: -1 if no elements match or size is negative
 * index of first element for which the cmp function does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (index < size)
			{
				if (cmp(array[index]))
					return (index);
				index++;
			}
		}
	}
	return (-1);
}
