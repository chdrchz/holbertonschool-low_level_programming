#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of the string
 * @str: variable is a pointer to a string
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, len1; 
	
	len = _strlen(str) - 1;
	len1 = (len + 2 / 2);
	
	for (i = len1; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
