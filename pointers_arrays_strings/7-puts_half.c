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
	char tmp;
	
	len = _strlen(str);
	len1 = (len - 1);
	
	for (i = 0; i < len / 2; i++)
	{
		tmp = str[i];
		str[i] = 
	}
	_putchar('\n');
}
