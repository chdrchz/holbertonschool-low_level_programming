#include "main.h"
/**
 * print_rev - printing a string in reverse
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
