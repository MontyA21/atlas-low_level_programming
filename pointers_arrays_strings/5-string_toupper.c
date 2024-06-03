#include "main.h"
/**
 * string_toupper - changing string to uppercase
 * @strs: string pointer
 * Return: Always (0)
*/
char *string_toupper(char *strs)
{
	int a;

	for (a = 0; strs[a] != '\0'; a++)
	{
		if (strs[a] >= 'a' && strs[a] <= 'z')
		{
			strs[a] = strs[a] - ' ';
		}
	}
	return (strs);
}
