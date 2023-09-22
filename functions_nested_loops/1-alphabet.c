#include "main.h"
/**
 * print_alphabet - this will print the alphabet using _putchar
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++);
	{
		_putchar(x);
	}
	_putchar('\n');

	return (0);
}
