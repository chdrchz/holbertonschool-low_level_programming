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
		putchar('+');
		return (0);
	}
	else if (x == 0)
	{
		putchar('0');
		return (1);
	}
	else
	{
		putchar ('-');
		return(-1);
	}
}
