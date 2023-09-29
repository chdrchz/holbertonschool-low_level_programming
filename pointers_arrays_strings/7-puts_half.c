#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of the string
 * @str: variable is a pointer to a string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;
	int k;

	j = _strlen(str) - 1;
	k = (j + 2) / 2;

	for (i = k; i <= j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
