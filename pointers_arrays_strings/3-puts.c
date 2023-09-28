#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to the standard output
 *
 * Return: 0
 */
void _puts(char *str)
{
	for (i = 0; str[i] != 0; i++ )
	{
		_putchar(i);
	}

	_putchar('\n');

	return (0);
}
