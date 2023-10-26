#include "function_pointers.h"
#include "_putchar.c"
/**
 * print_name - prints a name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int counter;

	if (_strlen(name) != '\0')
	{
		for (counter = 0; counter <_strlen(name); counter++)
		{
			f(&name[counter]);
		}
	}
}
