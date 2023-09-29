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
	char tmp;

	len = _strlen(str);
	
	for (i = 0; i < len / 2; i++);
	{
		tmp = str[len];
		_putchar(str[len]);
	}
	_putchar('\n');
}
