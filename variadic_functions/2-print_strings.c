#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 * Return: Void
 * Description: If separator is NULL, don't print. If string = NULL print (nil)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *string;
	unsigned int index = 0;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && index != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
