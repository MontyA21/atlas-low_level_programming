#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function thats prints name
 * Return: Void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}
