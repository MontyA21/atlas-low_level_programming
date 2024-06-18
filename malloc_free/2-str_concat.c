#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL for fail,
*/
char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int ab = 0;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[ab] != '\0')
		ab++;
	con = malloc(sizeof(char) * (a + ab) + 1);
	if (con == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		con[a] = s1[a];
	}
	for (ab = 0; s2[ab] != '\0'; ab++)
	{
		con[a] = s2[ab];
		a++;
	}
	con[a] = '\0';
	return (con);
}
