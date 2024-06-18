#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string
 * @str: original string
 * Return: pointer to duplicated string/NULL if fail
*/
char *_strdup(char *str)
{
	char *s;
	int x = 0;
	int y = 1;

	if (str == NULL)
	return (NULL);

	while (str[y])
	{
		y++;
	}
	s = malloc((sizeof(char) * y) + 1);
	if (s == NULL)
		return (NULL);
	while (x < y)
	{
		s[x] = str[x];
		x++;
	}
	return (s);
}
