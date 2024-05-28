#include "main.h"

/**
 * more_numbers - prints 0-14 ten times, followed by a new line
 * Return: Void
*/

void more_numbers(void)

{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
	_putchar('\n');
	}
}
