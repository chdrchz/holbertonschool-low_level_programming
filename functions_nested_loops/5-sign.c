#include "main.h"
/**
 * print_sign - prints the sign of a number and the return value
 * @x: the variable for seeing if the number is positive, negative or 0
 * Return: 1, 0 and -1
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
