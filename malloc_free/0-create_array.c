#include "main.h"
#include "stdlib.h"
/**
 * create_array - creates an array of chars
 * @size: amount of characters in the array
 * @c: character to initialize
 * Return: pointer to array, or NULL if fail
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}
	return (str);
}
