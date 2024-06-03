#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: char string to concatenate to
 * @src: char string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting string 'dest'
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[i + c] = src[c];
	}
	return (dest);
}
