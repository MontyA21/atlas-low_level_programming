#include "main.h"

/**
 * print_diagonal - prints a diagonal line, ending with a newline
 * @n: number of lines to draw
 * Return: Void
*/

void print_diagonal(int n)

{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
	_putchar('\\');
	_putchar('\n');
		}
	}
}
