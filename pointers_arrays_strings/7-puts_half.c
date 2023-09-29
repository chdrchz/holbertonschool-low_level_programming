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
		if (len % 3 == 0)
		{
			n = (len - 1) / 2;
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
