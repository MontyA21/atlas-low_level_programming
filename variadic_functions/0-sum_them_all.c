#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns sum of all parameters
 * @n: number of parameters passed
 * @...: a variable number of parameters to calculate sum
 * Return: Sum, or 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index, sum = 0;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
