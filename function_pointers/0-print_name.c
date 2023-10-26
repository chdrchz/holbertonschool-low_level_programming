#include "function_pointers.h"
#include "_putchar.c"
#include "_strlen.c"
/**
 * print_name - prints a name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int counter, length;
	length = _strlen(name);

	while (counter < length)
	{
		f(&name[counter]);
		counter++;
	}
}
