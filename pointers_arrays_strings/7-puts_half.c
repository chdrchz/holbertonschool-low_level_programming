#include "main.h"
#include "2_strlen.c"
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
		str[i] = str[len1];
		str[len1--] = tmp;	
	}
	_putchar('\n');
}
