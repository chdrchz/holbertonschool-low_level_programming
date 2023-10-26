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
	int counter = 0;

	while (name[counter] != '\0')
	{
		f(&name[counter]);
		counter++;
	}
}
