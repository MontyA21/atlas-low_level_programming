#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by new line
 * @separator: the string between the numbers being printed
 * @n: number of ints passed to the function
 * @...: a variable number of numbers to be printed
 * Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index = 0;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && index != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
