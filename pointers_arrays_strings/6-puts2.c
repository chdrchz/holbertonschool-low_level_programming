#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - prints every other character from a string
 * @str: pointer for a string
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	int length = _strlen(str);

	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
