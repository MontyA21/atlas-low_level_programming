#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates array of ints
 * @min: min value
 * @max: max value
 * Return: Pointer to new array, or NULL if fail
*/
int *array_range(int min, int max)
{
	int *array;
	int x = 0;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[x] = min;
		x++;
		min++;
	}
	return (array);
}
