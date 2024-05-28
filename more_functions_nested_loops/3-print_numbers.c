#include "main.h"

/**
 * Description: prints numbers 0 - 9 followed by new line
 * Return: void
*/

void print_numbers(void)

{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
		_putchar('\n');
}
