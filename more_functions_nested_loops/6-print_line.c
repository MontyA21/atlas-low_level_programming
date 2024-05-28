#include "main.h"

/**
 * print_line - prints a straight line, ending with a newline
 * @n: number of lines to draw
 * Return: Void
*/

void print_line(int n)

{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	_putchar ('\n');
	}
}
