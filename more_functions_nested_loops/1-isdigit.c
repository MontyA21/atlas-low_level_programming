#include "main.h"

/**
 * _isdigit - checks if the character is a digit between 0 & 9
 * @c: character being tested for a digit between 0 & 9
 * Return: 1 if c is a digit, 0 if otherwise
*/

int _isdigit(int c)

{
	return (c >= '0' && c <= '9');
}
