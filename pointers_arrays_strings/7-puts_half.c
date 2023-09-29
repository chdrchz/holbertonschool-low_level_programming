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
	int n;
	
	n = (_strlen(str) - 1) / 2;

	for (i = 0; i < n / 2; i++)
	{
		if (n % 3 == 0)
		{
			_putchar(str[n]);
		}	
	}
	_putchar('\n');
}
