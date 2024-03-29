#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: string to print
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
