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
	int len;

	len = _strlen(str);
	
	for (i = 0; i < len; i++)
	{
		if (len[i] % 3 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
